/**********************************************************
// Copyright open source
// Contact with 1098011272@qq.com
================ sha1.v ======================
>> Author       : ZPN
>> Date         : 2022.09.26
>> Description  : SHA1 module that generates w
************************************************************/
/* verilator lint_off UNSIGNED */

module sha1_w
  #(parameter N = 32)(
    input          clk   ,
    input          rst_n ,
    input          valid_w ,
    input [7   :0] t     ,
    input [511 :0] din   ,

    output [N-1 :0] w    ,
    output          ready_w 
);
  reg [511: 0] din_temp;
  wire [511: 0] din_temp_shift ;
//----------------------------------------------------------------
// The din_temp is 16*32 bits in size and can computes the next w.
  always @(posedge clk or negedge rst_n ) begin
    if(!rst_n) begin
      din_temp <= 512'h0 ;
    end else if((t == 8'd0) && valid_w) begin
      din_temp <= din    ;
    end else if((t > 8'd0) && (t <= 8'd79)) begin
      din_temp <= din_temp_shift ;
    end
  end

//---------------------------------------------------------------
  wire [N-1 :0] w_gen_temp = din_temp[511: 480] ^ din_temp[447: 416] ^ din_temp[255: 224] ^ din_temp[95: 64];
  wire [N-1 :0] w_gen = {w_gen_temp[30: 0], w_gen_temp[31]};      // generate new w

// the first fifteen is din ,and next is w_gen
  assign din_temp_shift = ((t >= 8'd0) && (t <= 8'd15)) ? {din_temp[479: 0], din_temp[511: 480]} :
                          (t >= 8'd16) && (t <= 8'd79)  ? {din_temp[479: 0], w_gen}              : 512'h0;

  assign w= ((t >= 8'd0) && (t <= 8'd15)) ? din_temp[511: 480] : w_gen;
  assign ready_w = (t == 8'd79);

endmodule

