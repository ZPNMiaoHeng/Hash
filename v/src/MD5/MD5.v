`define T_0  32'hd76aa478
`define T_1  32'he8c7b756
`define T_2  32'h242070db
`define T_3  32'hc1bdceee
`define T_4  32'hf57c0faf
`define T_5  32'h4787c62a
`define T_6  32'ha8304613
`define T_7  32'hfd469501
`define T_8  32'h698098d8
`define T_9 32'h8b44f7af
`define T_10 32'hffff5bb1
`define T_11 32'h895cd7be
`define T_12 32'h6b901122
`define T_13 32'hfd987193
`define T_14 32'ha679438e
`define T_15 32'h49b40821
`define T_16 32'hf61e2562
`define T_17 32'hc040b340
`define T_18 32'h265e5a51
`define T_19 32'he9b6c7aa
`define T_20 32'hd62f105d
`define T_21 32'h2441453
`define T_22 32'hd8a1e681
`define T_23 32'he7d3fbc8
`define T_24 32'h21e1cde6
`define T_25 32'hc33707d6
`define T_26 32'hf4d50d87
`define T_27 32'h455a14ed
`define T_28 32'ha9e3e905
`define T_29 32'hfcefa3f8
`define T_30 32'h676f02d9
`define T_31 32'h8d2a4c8a
`define T_32 32'hfffa3942
`define T_33 32'h8771f681
`define T_34 32'h6d9d6122
`define T_35 32'hfde5380c
`define T_36 32'ha4beea44
`define T_37 32'h4bdecfa9
`define T_38 32'hf6bb4b60
`define T_39 32'hbebfbc70
`define T_40 32'h289b7ec6
`define T_41 32'heaa127fa
`define T_42 32'hd4ef3085
`define T_43 32'h4881d05
`define T_44 32'hd9d4d039
`define T_45 32'he6db99e5
`define T_46 32'h1fa27cf8
`define T_47 32'hc4ac5665
`define T_48 32'hf4292244
`define T_49 32'h432aff97
`define T_50 32'hab9423a7
`define T_51 32'hfc93a039
`define T_52 32'h655b59c3
`define T_53 32'h8f0ccc92
`define T_54 32'hffeff47d
`define T_55 32'h85845dd1
`define T_56 32'h6fa87e4f
`define T_57 32'hfe2ce6e0
`define T_58 32'ha3014314
`define T_59 32'h4e0811a1
`define T_60 32'hf7537e82
`define T_61 32'hbd3af235
`define T_62 32'h2ad7d2bb
`define T_63 32'heb86d391

module MD5 (
  input          clk  ,
  input          rst_n,
  input          valid,
  input [511: 0] din  ,
  
  output [127: 0] dout,
  output          ready,
  output          work     // MD5 modlule work state
);
// store din data
  reg [31: 0] M0 [63: 0], M1 [63:0], M2 [63:0], M3 [63:0],
              M4 [63: 0], M5 [63:0], M6 [63:0], M7 [63:0], 
              M8 [63: 0], M9 [63:0], M10[63:0], M11[63:0], 
              M12[63: 0], M13[63:0], M14[63:0], M15[63:0];

  reg [31: 0]  A[64: 0], B[64: 0], C[64: 0], D[64: 0];
  reg [64: 0] Is_work;
  wire [31: 0] next_a [63: 0];
  wire [31: 0] shift_a [63: 0];
  integer i,j;

  assign dout = { A[64][7: 0], A[64][15: 8], A[64][23: 16], A[64][31: 24],
                  B[64][7: 0], B[64][15: 8], B[64][23: 16], B[64][31: 24],
                  C[64][7: 0], C[64][15: 8], C[64][23: 16], C[64][31: 24],
                  D[64][7: 0], D[64][15: 8], D[64][23: 16], D[64][31: 24]};
  assign ready = Is_work[64: 64];
  assign work = | Is_work;

  parameter MD5_A = 32'h67452301;
  parameter MD5_B = 32'hefcdab89;
  parameter MD5_C = 32'h98badcfe;
  parameter MD5_D = 32'h10325476;

  assign next_a[ 0 ] = A[ 0 ] + F(B[ 0 ], C[ 0 ], D[ 0 ]) + M0[ 0 ] + `T_0;
  assign next_a[ 1 ] = A[ 1 ] + F(B[ 1 ], C[ 1 ], D[ 1 ]) + M1[ 1 ] + `T_1;
  assign next_a[ 2 ] = A[ 2 ] + F(B[ 2 ], C[ 2 ], D[ 2 ]) + M2[ 2 ] + `T_2;
  assign next_a[ 3 ] = A[ 3 ] + F(B[ 3 ], C[ 3 ], D[ 3 ]) + M3[ 3 ] + `T_3;
  assign next_a[ 4 ] = A[ 4 ] + F(B[ 4 ], C[ 4 ], D[ 4 ]) + M4[ 4 ] + `T_4;
  assign next_a[ 5 ] = A[ 5 ] + F(B[ 5 ], C[ 5 ], D[ 5 ]) + M5[ 5 ] + `T_5;
  assign next_a[ 6 ] = A[ 6 ] + F(B[ 6 ], C[ 6 ], D[ 6 ]) + M6[ 6 ] + `T_6;
  assign next_a[ 7 ] = A[ 7 ] + F(B[ 7 ], C[ 7 ], D[ 7 ]) + M7[ 7 ] + `T_7;
  assign next_a[ 8 ] = A[ 8 ] + F(B[ 8 ], C[ 8 ], D[ 8 ]) + M8[ 8 ] + `T_8;
  assign next_a[ 9 ] = A[ 9 ] + F(B[ 9 ], C[ 9 ], D[ 9 ]) + M9[ 9 ] + `T_9;
  assign next_a[10 ] = A[10 ] + F(B[10 ], C[10 ], D[10 ]) + M10[10 ] + `T_10;
  assign next_a[11 ] = A[11 ] + F(B[11 ], C[11 ], D[11 ]) + M11[11 ] + `T_11;
  assign next_a[12 ] = A[12 ] + F(B[12 ], C[12 ], D[12 ]) + M12[12 ] + `T_12;
  assign next_a[13 ] = A[13 ] + F(B[13 ], C[13 ], D[13 ]) + M13[13 ] + `T_13;
  assign next_a[14 ] = A[14 ] + F(B[14 ], C[14 ], D[14 ]) + M14[14 ] + `T_14;
  assign next_a[15 ] = A[15 ] + F(B[15 ], C[15 ], D[15 ]) + M15[15 ] + `T_15;

  assign next_a[16 ] = A[16 ] + G(B[16 ], C[16 ], D[16 ]) + M1[16 ] + `T_16;
  assign next_a[17 ] = A[17 ] + G(B[17 ], C[17 ], D[17 ]) + M6[17 ] + `T_17;
  assign next_a[18 ] = A[18 ] + G(B[18 ], C[18 ], D[18 ]) + M11[18 ] + `T_18;
  assign next_a[19 ] = A[19 ] + G(B[19 ], C[19 ], D[19 ]) + M0[19 ] + `T_19;
  assign next_a[20 ] = A[20 ] + G(B[20 ], C[20 ], D[20 ]) + M5[20 ] + `T_20;
  assign next_a[21 ] = A[21 ] + G(B[21 ], C[21 ], D[21 ]) + M10[21 ] + `T_21;
  assign next_a[22 ] = A[22 ] + G(B[22 ], C[22 ], D[22 ]) + M15[22 ] + `T_22;
  assign next_a[23 ] = A[23 ] + G(B[23 ], C[23 ], D[23 ]) + M4[23 ] + `T_23;
  assign next_a[24 ] = A[24 ] + G(B[24 ], C[24 ], D[24 ]) + M9[24 ] + `T_24;
  assign next_a[25 ] = A[25 ] + G(B[25 ], C[25 ], D[25 ]) + M14[25 ] + `T_25;
  assign next_a[26 ] = A[26 ] + G(B[26 ], C[26 ], D[26 ]) + M3[26 ] + `T_26;
  assign next_a[27 ] = A[27 ] + G(B[27 ], C[27 ], D[27 ]) + M8[27 ] + `T_27;
  assign next_a[28 ] = A[28 ] + G(B[28 ], C[28 ], D[28 ]) + M13[28 ] + `T_28;
  assign next_a[29 ] = A[29 ] + G(B[29 ], C[29 ], D[29 ]) + M2[29 ] + `T_29;
  assign next_a[30 ] = A[30 ] + G(B[30 ], C[30 ], D[30 ]) + M7[30 ] + `T_30;
  assign next_a[31 ] = A[31 ] + G(B[31 ], C[31 ], D[31 ]) + M12[31 ] + `T_31;

  assign next_a[32 ] = A[32 ] + H(B[32 ], C[32 ], D[32 ]) + M5[32 ] + `T_32;
  assign next_a[33 ] = A[33 ] + H(B[33 ], C[33 ], D[33 ]) + M8[33 ] + `T_33;
  assign next_a[34 ] = A[34 ] + H(B[34 ], C[34 ], D[34 ]) + M11[34 ] + `T_34;
  assign next_a[35 ] = A[35 ] + H(B[35 ], C[35 ], D[35 ]) + M14[35 ] + `T_35;
  assign next_a[36 ] = A[36 ] + H(B[36 ], C[36 ], D[36 ]) + M1[36 ] + `T_36;
  assign next_a[37 ] = A[37 ] + H(B[37 ], C[37 ], D[37 ]) + M4[37 ] + `T_37;
  assign next_a[38 ] = A[38 ] + H(B[38 ], C[38 ], D[38 ]) + M7[38 ] + `T_38;
  assign next_a[39 ] = A[39 ] + H(B[39 ], C[39 ], D[39 ]) + M10[39 ] + `T_39;
  assign next_a[40 ] = A[40 ] + H(B[40 ], C[40 ], D[40 ]) + M13[40 ] + `T_40;
  assign next_a[41 ] = A[41 ] + H(B[41 ], C[41 ], D[41 ]) + M0[41 ] + `T_41;
  assign next_a[42 ] = A[42 ] + H(B[42 ], C[42 ], D[42 ]) + M3[42 ] + `T_42;
  assign next_a[43 ] = A[43 ] + H(B[43 ], C[43 ], D[43 ]) + M6[43 ] + `T_43;
  assign next_a[44 ] = A[44 ] + H(B[44 ], C[44 ], D[44 ]) + M9[44 ] + `T_44;
  assign next_a[45 ] = A[45 ] + H(B[45 ], C[45 ], D[45 ]) + M12[45 ] + `T_45;
  assign next_a[46 ] = A[46 ] + H(B[46 ], C[46 ], D[46 ]) + M15[46 ] + `T_46;
  assign next_a[47 ] = A[47 ] + H(B[47 ], C[47 ], D[47 ]) + M2[47 ] + `T_47;

  assign next_a[48 ] = A[48 ] + I(B[48 ], C[48 ], D[48 ]) + M0[48 ] + `T_48;
  assign next_a[49 ] = A[49 ] + I(B[49 ], C[49 ], D[49 ]) + M7[49 ] + `T_49;
  assign next_a[50 ] = A[50 ] + I(B[50 ], C[50 ], D[50 ]) + M14[50 ] + `T_50;
  assign next_a[51 ] = A[51 ] + I(B[51 ], C[51 ], D[51 ]) + M5[51 ] + `T_51;
  assign next_a[52 ] = A[52 ] + I(B[52 ], C[52 ], D[52 ]) + M12[52 ] + `T_52;
  assign next_a[53 ] = A[53 ] + I(B[53 ], C[53 ], D[53 ]) + M3[53 ] + `T_53;
  assign next_a[54 ] = A[54 ] + I(B[54 ], C[54 ], D[54 ]) + M10[54 ] + `T_54;
  assign next_a[55 ] = A[55 ] + I(B[55 ], C[55 ], D[55 ]) + M1[55 ] + `T_55;
  assign next_a[56 ] = A[56 ] + I(B[56 ], C[56 ], D[56 ]) + M8[56 ] + `T_56;
  assign next_a[57 ] = A[57 ] + I(B[57 ], C[57 ], D[57 ]) + M15[57 ] + `T_57;
  assign next_a[58 ] = A[58 ] + I(B[58 ], C[58 ], D[58 ]) + M6[58 ] + `T_58;
  assign next_a[59 ] = A[59 ] + I(B[59 ], C[59 ], D[59 ]) + M13[59 ] + `T_59;
  assign next_a[60 ] = A[60 ] + I(B[60 ], C[60 ], D[60 ]) + M4[60 ] + `T_60;
  assign next_a[61 ] = A[61 ] + I(B[61 ], C[61 ], D[61 ]) + M11[61 ] + `T_61;
  assign next_a[62 ] = A[62 ] + I(B[62 ], C[62 ], D[62 ]) + M2[62 ] + `T_62;
  assign next_a[63 ] = A[63 ] + I(B[63 ], C[63 ], D[63 ]) + M9[63 ] + `T_63;

  assign shift_a[ 0] = SHIFT(next_a[ 0], 7 ) + B[ 0];
  assign shift_a[ 1] = SHIFT(next_a[ 1], 12) + B[ 1];
  assign shift_a[ 2] = SHIFT(next_a[ 2], 17) + B[ 2];
  assign shift_a[ 3] = SHIFT(next_a[ 3], 22) + B[ 3];
  assign shift_a[ 4] = SHIFT(next_a[ 4], 7 ) + B[ 4];
  assign shift_a[ 5] = SHIFT(next_a[ 5], 12) + B[ 5];
  assign shift_a[ 6] = SHIFT(next_a[ 6], 17) + B[ 6];
  assign shift_a[ 7] = SHIFT(next_a[ 7], 22) + B[ 7];
  assign shift_a[ 8] = SHIFT(next_a[ 8], 7 ) + B[ 8];
  assign shift_a[ 9] = SHIFT(next_a[ 9], 12) + B[ 9];
  assign shift_a[10] = SHIFT(next_a[10], 17) + B[10];
  assign shift_a[11] = SHIFT(next_a[11], 22) + B[11];
  assign shift_a[12] = SHIFT(next_a[12], 7 ) + B[12];
  assign shift_a[13] = SHIFT(next_a[13], 12) + B[13];
  assign shift_a[14] = SHIFT(next_a[14], 17) + B[14];
  assign shift_a[15] = SHIFT(next_a[15], 22) + B[15];

  assign shift_a[16] = SHIFT(next_a[16], 5 ) + B[16];
  assign shift_a[17] = SHIFT(next_a[17], 9 ) + B[17];
  assign shift_a[18] = SHIFT(next_a[18], 14) + B[18];
  assign shift_a[19] = SHIFT(next_a[19], 20) + B[19];
  assign shift_a[20] = SHIFT(next_a[20], 5 ) + B[20];
  assign shift_a[21] = SHIFT(next_a[21], 9 ) + B[21];
  assign shift_a[22] = SHIFT(next_a[22], 14) + B[22];
  assign shift_a[23] = SHIFT(next_a[23], 20) + B[23];
  assign shift_a[24] = SHIFT(next_a[24], 5 ) + B[24];
  assign shift_a[25] = SHIFT(next_a[25], 9 ) + B[25];
  assign shift_a[26] = SHIFT(next_a[26], 14) + B[26];
  assign shift_a[27] = SHIFT(next_a[27], 20) + B[27];
  assign shift_a[28] = SHIFT(next_a[28], 5 ) + B[28];
  assign shift_a[29] = SHIFT(next_a[29], 9 ) + B[29];
  assign shift_a[30] = SHIFT(next_a[30], 14) + B[30];
  assign shift_a[31] = SHIFT(next_a[31], 20) + B[31];

  assign shift_a[32] = SHIFT(next_a[32], 4 ) + B[32];
  assign shift_a[33] = SHIFT(next_a[33], 11) + B[33];
  assign shift_a[34] = SHIFT(next_a[34], 16) + B[34];
  assign shift_a[35] = SHIFT(next_a[35], 23) + B[35];
  assign shift_a[36] = SHIFT(next_a[36], 4 ) + B[36];
  assign shift_a[37] = SHIFT(next_a[37], 11) + B[37];
  assign shift_a[38] = SHIFT(next_a[38], 16) + B[38];
  assign shift_a[39] = SHIFT(next_a[39], 23) + B[39];
  assign shift_a[40] = SHIFT(next_a[40], 4 ) + B[40];
  assign shift_a[41] = SHIFT(next_a[41], 11) + B[41];
  assign shift_a[42] = SHIFT(next_a[42], 16) + B[42];
  assign shift_a[43] = SHIFT(next_a[43], 23) + B[43];
  assign shift_a[44] = SHIFT(next_a[44], 4 ) + B[44];
  assign shift_a[45] = SHIFT(next_a[45], 11) + B[45];
  assign shift_a[46] = SHIFT(next_a[46], 16) + B[46];
  assign shift_a[47] = SHIFT(next_a[47], 23) + B[47];

  assign shift_a[48] = SHIFT(next_a[48], 6 ) + B[48];
  assign shift_a[49] = SHIFT(next_a[49], 10) + B[49];
  assign shift_a[50] = SHIFT(next_a[50], 15) + B[50];
  assign shift_a[51] = SHIFT(next_a[51], 21) + B[51];
  assign shift_a[52] = SHIFT(next_a[52], 6 ) + B[52];
  assign shift_a[53] = SHIFT(next_a[53], 10) + B[53];
  assign shift_a[54] = SHIFT(next_a[54], 15) + B[54];
  assign shift_a[55] = SHIFT(next_a[55], 21) + B[55];
  assign shift_a[56] = SHIFT(next_a[56], 6 ) + B[56];
  assign shift_a[57] = SHIFT(next_a[57], 10) + B[57];
  assign shift_a[58] = SHIFT(next_a[58], 15) + B[58];
  assign shift_a[59] = SHIFT(next_a[59], 21) + B[59];
  assign shift_a[60] = SHIFT(next_a[60], 6 ) + B[60];
  assign shift_a[61] = SHIFT(next_a[61], 10) + B[61];
  assign shift_a[62] = SHIFT(next_a[62], 15) + B[62];
  assign shift_a[63] = SHIFT(next_a[63], 21) + B[63];

always @(posedge clk or negedge rst_n) begin
  if(!rst_n) begin
    {A[0], B[0], C[0], D[0]} <= {MD5_A, MD5_B, MD5_C, MD5_D};
    for( j= 1; j<=64; j=j+1)
      {A[j], B[j], C[j], D[j]} <= 'b0;
  end
  else if(valid) begin                    // store every hash data
    for(j=1; j<=63; j=j+1)
      {A[j], B[j], C[j], D[j]} <= {D[j-1], shift_a[j-1], B[j-1] , C[j-1]};
    A[64] <= D[63] + MD5_A;
    B[64] <= A[63] + MD5_B;
    C[64] <= B[63] + MD5_C;
    D[64] <= C[63] + MD5_D;

    end
end

always @(posedge clk or negedge rst_n) begin
  if(!rst_n) begin
    Is_work <= 0;

    for(j = 0; j < 64 ; j=j+1)
      {M0[j], M1[j], M2[j], M3[j], M4[j], M5[j], M6[j], M7[j], M8[j], 
        M9[j], M10[j], M11[j], M12[j], M13[j], M14[j], M15[j]} <= 512'h0;
  end 
  else if(valid) begin                     // store every flow data: din
      Is_work <= {Is_work[63: 0], valid};
      
      {M0[0], M1[0], M2[0], M3[0], M4[0], M5[0], M6[0], M7[0], M8[0], 
        M9[0], M10[0], M11[0], M12[0], M13[0], M14[0], M15[0]} <= {
                    din[487:480], din[495:488], din[503:496], din[511:504], 
                    din[455:448], din[463:456], din[471:464], din[479:472],
                    din[423:416], din[431:424], din[439:432], din[447:440],
                    din[391:384], din[399:392], din[407:400], din[415:408],
                    din[359:352], din[367:360], din[375:368], din[383:376],
                    din[327:320], din[335:328], din[343:336], din[351:344],
                    din[295:288], din[303:296], din[311:304], din[319:312],
                    din[263:256], din[271:264], din[279:272], din[287:280],
                    din[231:224], din[239:232], din[247:240], din[255:248],
                    din[199:192], din[207:200], din[215:208], din[223:216],
                    din[167:160], din[175:168], din[183:176], din[191:184],
                    din[135:128], din[143:136], din[151:144], din[159:152],
                    din[103: 96], din[111:104], din[119:112], din[127:120],
                    din[ 71: 64], din[ 79: 72], din[ 87: 80], din[ 95: 88],
                    din[ 39: 32], din[ 47: 40], din[ 55: 48], din[ 63: 56],
                    din[  7:  0], din[ 15:  8], din[ 23: 16], din[ 31: 24]};

      for(i = 1; i < 64; i=i+1)
      {M0[i],  M1[i],  M2[i],  M3[i],  M4[i],  M5[i],  M6[i], M7[i], M8[i], 
        M9[i], M10[i], M11[i], M12[i], M13[i], M14[i], M15[i]} <= 
      {M0[i-1],  M1[i-1],  M2[i-1],  M3[i-1],  M4[i-1],  M5[i-1],  M6[i-1], M7[i-1], M8[i-1], 
        M9[i-1], M10[i-1], M11[i-1], M12[i-1], M13[i-1], M14[i-1], M15[i-1]};
  end
end

function [31: 0] SHIFT;
    input [31: 0] a;
    input [4 : 0] s;
    begin
      SHIFT = (a << s) | (a >> (32 -s));
    end    
endfunction

//定义F函数
function [31:0] F;      
input [31:0] x, y, z;
begin        
   F = (x&y)|((~x)&z);
end              
endfunction       

//定义G函数
function [31:0] G;
input [31:0] x, y, z;
begin             
   G = (x&z)|(y&(~z));
end              
endfunction 

//定义H函数
function [31:0] H;
input [31:0] x, y, z;
begin          
   H = (x^y^z);
end 
endfunction 

//定义I函数
function [31:0] I;
input [31:0] x, y, z;
begin 
   I = (y^(x|(~z)));
end 
endfunction 

endmodule
