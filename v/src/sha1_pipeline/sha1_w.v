/**********************************************************
// Copyright open source
// Contact with 1098011272@qq.com
================ sha1.v ======================
>> Author       : ZPN
>> Date         : 2022.09.26
>> Description  : SHA1 module that generates w

++ 流水化：
>> 由于w跟需要输入有关系，故将采用 每轮产生W
>> 需要将对应16* 32值输出
************************************************************/
/* verilator lint_off UNSIGNED */

module sha1_w
  #(parameter N = 32)(
    input          clk   ,
    input          rst_n ,
    input          valid ,
    input [7   :0] round     ,
    input [511 :0] din   ,

//    output [511 :0] din_next ,
    output [N-1 :0] w        
//    output          ready    
);
  reg [511: 0] din_temp;
  wire [511: 0] din_temp_shift ;
//----------------------------------------------------------------
// The din_temp is 16*32 bits in size and can computes the next w.
  always @(posedge clk or negedge rst_n ) begin
    if(!rst_n) begin
      din_temp <= 512'h0 ;
    end else if((round == 8'd0) && valid) begin
      din_temp <= din    ;
    end else if((round >= 8'd1) && (round <= 8'd80)) begin
      din_temp <= din_temp_shift ;
    end else 
      din_temp <= 512'h0;
  end

//---------------------------------------------------------------
  wire [N-1 :0] w_gen_temp = din_temp[511: 480] ^ din_temp[447: 416] ^ din_temp[255: 224] ^ din_temp[95: 64];
  wire [N-1 :0] w_gen = {w_gen_temp[30: 0], w_gen_temp[31]};      // generate new w

// the first fifteen is din ,and next is w_gen
  assign din_temp_shift = ((round >= 8'd0) && (round <= 8'd16)) ? {din_temp[479: 0], din_temp[511: 480]} :
                          (round > 8'd16) && (round <= 8'd80)  ? {din_temp[479: 0], w_gen}              : 512'h0;

  assign w= ((round >= 8'd0) && (round <= 8'd16)) ? din_temp[511: 480] : w_gen;

endmodule
