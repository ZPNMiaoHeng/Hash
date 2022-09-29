/**********************************************************
// Copyright open source
// Contact with 1098011272@qq.com
================ sha1.v ======================
>> Author       : ZPN
>> Date         : 2022.09.29
>> Description  : SHA1 TOP module
************************************************************/

module sha1_top (
  input          clk   ,
  input          rst_n ,
  input          valid ,
  input [511: 0] din   ,

  output [159: 0] dout ,
  output          ready
);
  parameter H0 = 32'h6745_2301;
  parameter H1 = 32'hEFCD_AB89;
  parameter H2 = 32'h98BA_DCFE;
  parameter H3 = 32'h1032_5476;
  parameter H4 = 32'hC3D2_E1F0;

  wire [7 : 0] t;
  wire [31: 0] w_temp, a_temp, b_temp, c_temp, d_temp, e_temp;
  wire [159 : 0] r_din_temp;
  reg  [159 : 0] r_din;

always @(posedge clk or negedge rst_n) begin
  if(!rst_n) begin
    r_din <= 0;
  end else if(t == 8'd0) begin
    r_din <= {H0, H1, H2, H3, H4};
  end else if(t > 8'd0 && t < 8'd80) begin
    r_din <= r_din_temp;
  end else begin
    r_din <= 0;
  end
end

  sha1_con u_con (
    .clk   (clk  ),
    .rst_n (rst_n),
    .valid (valid),

    .t       (t     ),
    .ready_t (ready )
  );

  sha1_w u_w (
    .clk     (clk   ),
    .rst_n   (rst_n ),
    .valid_w (valid ),
    .t       (t     ),
    .din     (din   ),

    .w       (w_temp )
  );

  sha1_round u_round (
    .r_din (r_din  ),
    .w     (w_temp ),
    .round (t      ),

    .r_dout (r_din_temp)
  );
  assign a_temp = (t == 8'd80) ? (r_din_temp[159: 128] + H0): 32'd0;
  assign b_temp = (t == 8'd80) ? (r_din_temp[127: 96 ] + H1): 32'd0;
  assign c_temp = (t == 8'd80) ? (r_din_temp[95 : 64 ] + H2): 32'd0;
  assign d_temp = (t == 8'd80) ? (r_din_temp[63 : 32 ] + H3): 32'd0;
  assign e_temp = (t == 8'd80) ? (r_din_temp[31 : 0  ] + H4): 32'd0;

  assign dout = {a_temp, b_temp, c_temp, d_temp, e_temp};

endmodule
