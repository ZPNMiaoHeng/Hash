module sha1_con_tb;

reg   clk;
reg   rst_n;
reg   valid;

wire  [7 :0]  t;
wire  ready_t;

initial begin
   clk=0;
   forever #5 clk=~clk;
end

initial begin
        rst_n=1'b1;
    #10 rst_n=1'b0;
    #10 rst_n=1'b1;
end

initial begin
        valid=1'b0;
    #50 valid=1'b1;
end

sha1_con tb (
    .clk                     (clk     ),
    .rst_n                   (rst_n   ),
    .valid                   (valid   ),
    
    .t                       (t       ),
    .ready_t                 (ready_t ),
);

endmodule