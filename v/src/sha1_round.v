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
/* verilator lint_off UNSIGNED */
module sha1_round
    #(parameter N = 32)(
        input [159 : 0]  r_din    ,
        input [31  : 0]  w        ,
        input [7   : 0]  round    ,
    
        output [159 : 0] r_dout     
);

    //循环所用函数
    reg [N-1: 0] f;
    reg [N-1: 0] k;
    wire [N-1: 0] a_shift, b_shift, add_result;
    wire [N-1: 0] a = r_din[159: 128];
    wire [N-1: 0] b = r_din[127: 96 ];
    wire [N-1: 0] c = r_din[95 : 64 ];
    wire [N-1: 0] d = r_din[63 : 32 ];
    wire [N-1: 0] e = r_din[31 : 0 ];

    always@ (*) begin
        k = 32'd0;
        if((round > 8'd0 ) && (round <= 8'd20)) k = 32'h5A82_7999;
        if((round > 8'd20) && (round <= 8'd40)) k = 32'h6ED9_EBA1;
        if((round > 8'd40) && (round <= 8'd60)) k = 32'h8F1B_BCDC;
        if((round > 8'd60) && (round <= 8'd80)) k = 32'hCA62_C1D6;
    end

    always@ (*) begin
        f = 32'h0;
        if((round > 8'd0 ) && (round <= 8'd20)) f = ((b & c) | (~b & d));
        if((round > 8'd20) && (round <= 8'd40)) f = (b ^ c ^ d);
        if((round > 8'd40) && (round <= 8'd60)) f = ((b & c) | (b & d) | (c & d));
        if((round > 8'd60) && (round <= 8'd80)) f = (b ^ c ^ d);
    end

    assign a_shift = {a[26: 0], a[31:27]};
    assign b_shift = {b[1 : 0], b[31: 2]};
    assign add_result = (a_shift + ((f + k) + (e + w)));
    assign r_dout = {add_result, a, b_shift, c, d};

endmodule
