/**********************************************************
// Copyright 1891.06.02-2017.07.14
// Contact with 1098011272@qq.com
================ SHA1_round.v ======================
>> Author       : ZPN
>> Date         : 2022.09.26
>> Description  : SHA1 round function
  1、输入160 bits {ABCDE}，可以得到当前round的temp；
  2、输出160 bits {ABCDE}，移位变换后输出
>> note         : (1)To 
>>              : (2)My
>> V180121      : World.
************************************************************/
module sha1_round(
  input [159 : 0] 
);


/*
module sha1_round(
    input  [31:0] a,
    input  [31:0] b,
    input  [31:0] c,
    input  [31:0] d,
    input  [31:0] e,
    input  [31:0] w0,
    input  [8:0]  t,

    output wire [31:0]a_next
    );

//循环所用常数
parameter K_t0  = 32'h5A82_7999;
parameter K_t20 = 32'h6ED9_EBA1;
parameter K_t40 = 32'h8F1B_BCDC;
parameter K_t60 = 32'hCA62_C1D6;

//根据循环次数判断下一个a如何计算
assign a_next = (t< 20) ? {a[26:0], a[31:27]} +F_t0 (b,c,d) +e +w0 +K_t0:
                (t< 40) ? {a[26:0], a[31:27]} +F_t20(b,c,d) +e +w0 +K_t20:
                (t< 60) ? {a[26:0], a[31:27]} +F_t40(b,c,d) +e +w0 +K_t40:
                (t< 80) ? {a[26:0], a[31:27]} +F_t20(b,c,d) +e +w0 +K_t60: 32'h0;

//循环所用函数
function [31:0]F_t0;//0<=t<=19
    input[31:0]B,C,D;
    begin
        F_t0 = (B&C)^(~B&D);
    end
endfunction

function [31:0]F_t40;//40<=t<=59
    input[31:0]B,C,D;
    begin
        F_t40 = (B&C)^(B&D)^(C&D); 
    end
endfunction

function [31:0]F_t20;//20<=t<=39;60<=t<=79
    input [31:0]B,C,D;
    begin
        F_t20 = B^C^D;
    end
endfunction

endmodule
*/