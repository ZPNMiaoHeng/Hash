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
  wire [31: 0] w_temp;
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
    .ready_t ( ready)
  );

  sha1_w u_w (
    .clk     (clk   ),
    .rst_n   (rst_n ),
    .valid_w (valid ),
    .t       (t     ),
    .din     (din   ),

    .w       (w_temp )
//    .ready_w (ready  )
  );

  sha1_round u_round (
    .r_din (r_din  ),
    .w     (w_temp ),
    .round (t      ),

    .r_dout (r_din_temp)
  );
  assign dout = (t == 8'd79) ? r_din_temp: 160'd0;
//  assign ready = (t == 8'd79);

endmodule
