/**********************************************************
// Copyright 1891.06.02-2017.07.14
// Contact with 1098011272@qq.com
================ sha1.v ======================
>> Author       : ZPN
>> Date         : 2022.09.26
>> Description  : SHA1 round function
  1. w: if t > 15, w is 
>> note         : (1)To 
>>              : (2)My
>> V180121      : World.
************************************************************/

module sha1
  #(parameter N = 32)(
    input          clk   ,
    input          rst_n ,
    input          valid ,
    input [7   :0] t     ,
    input [511 :0] din   ,

    output [N-1 :0] w
);
  reg [512: 0] din_temp;
  wire [512: 0] din_temp_shift ;
//-------------------------- 512bits 内存空间 --------------------------------------
  always @(posedge clk or negedge rst_n ) begin
    if(!rst_n) begin
      din_temp <= 512'h0 ;
    end else if(t == 8'd0) begin
      din_temp <= din    ;
    end else if((t > 8'd0) && (t <= 8'd79)) begin
      din_temp <= din_temp_shift ;
    end
  end

//-------------------------- 生成新的 w --------------------------------------
  wire [N-1 :0] w_gen_temp = din_temp[511: 480] ^ din_temp[447: 416] ^ din_temp[255: 224] ^ din_temp[95: 64]; // generate new w
  wire [N-1 :0] w_gen = {w_gen_temp[30: 0], w_gen_temp[31]}

  assign din_temp_shift = ((t >= 8'd0) && (t <= 8'd15)) ? {din_temp[479: 0], din_temp[511: 480]} :
                            (t >= 8'd16) && (t <= 8'd79) ? {din_temp[479: 0], w_gen} : 
                              512'h0;

  assign w= ((t >= 8'd0) && (t <= 8'd15)) ? din_temp[512: 480] : din_temp[31:0];

endmodule