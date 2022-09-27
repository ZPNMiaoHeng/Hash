module top(
  input a,
  input b,
  input c,
  input d,
  output f
);
  assign f = ~((a&b) | (~(c&d)));
endmodule
