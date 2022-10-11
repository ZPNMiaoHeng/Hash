/**********************************************************
// Copyright 1891.06.02-2017.07.14
// Contact with 1098011272@qq.com
================ SHA1_round.v ======================
>> Author       : ZPN
>> Date         : 2022.10.11
>> Description  : SHA1 round function 
  1、输入160 bits {ABCDE}，可以得到当前round的temp；
  2、输出160 bits {ABCDE}，移位变换后输出;
++3、改为流水线；
>> note         : (1)To 
>>              : (2)My
>> V180121      : World.
************************************************************/
/* verilator lint_off UNSIGNED */

module sha1_round
    #(parameter N = 32)(
        input                 clk      ,
        input                 rst_n    ,

        input                 valid    ,
        input      [159 : 0]  r_din    ,
        input      [31  : 0]  w        ,
        input      [7   : 0]  round    ,
    
        output reg [159 : 0]  r_dout   ,     
        output reg            ready
);

    //循环所用函数
    reg [N-1: 0] f;
    reg [N-1: 0] k;
    wire ready_t;
    wire [N-1: 0] a_shift, b_shift, add_result;
    wire [N-1: 0] a = r_din[159: 128];
    wire [N-1: 0] b = r_din[127: 96 ];
    wire [N-1: 0] c = r_din[95 : 64 ];
    wire [N-1: 0] d = r_din[63 : 32 ];
    wire [N-1: 0] e = r_din[31 : 0 ];

    always@ (posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            k <= 32'd0;
            f <= 32'h0;
        end else if(valid) begin
            if((round > 8'd0 ) && (round <= 8'd20)) begin f <= ((b & c) | (~b & d));          k <= 32'h5A82_7999; end
            if((round > 8'd20) && (round <= 8'd40)) begin f <= (b ^ c ^ d);                   k <= 32'h6ED9_EBA1; end
            if((round > 8'd40) && (round <= 8'd60)) begin f <= ((b & c) | (b & d) | (c & d)); k <= 32'h8F1B_BCDC; end
            if((round > 8'd60) && (round <= 8'd80)) begin f <= (b ^ c ^ d);                   k <= 32'hCA62_C1D6; end
        end
    end

    assign a_shift = {a[26: 0], a[31:27]};
    assign b_shift = {b[1 : 0], b[31: 2]};
    assign add_result = valid ? (a_shift + ((f + k) + (e + w))) : 'b0;
    assign ready_t = add_result != 'b0;

    always @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            r_dout <= 160'b0;
            ready  <= 1'b0  ;
        end 
        else begin
            r_dout <= {add_result, a, b_shift, c, d};
            ready  <= ready_t;
        end
    end

endmodule

