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

module sha1(
  input clk,
  input rst_n,
  input valid,
  input [511 :0] d_in,

  output reg [159 :0] d_out
);

  parameter H0 = 32'h6745_2301;  // initialized parameter A,B,C,D,E
  parameter H1 = 32'hEFCD_AB89;
  parameter H2 = 32'h98BA_DCFE;
  parameter H3 = 32'h1032_5476;
  parameter H4 = 32'hC3D2_E1F0;

  reg [31 :0] w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15; // d_in = 16 * 32


endmodule