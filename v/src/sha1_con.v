module sha1_con(
  input         clk   ,
  input         rst_n ,
  input         valid ,

  output reg [7 :0] t,
  output  ready_t
);

  parameter IDLE  = 2'b00;
  parameter ROUND = 2'b01;

  reg [1 :0] s_cur, s_next;
  //-------------------------- First state machine -------------------------------
  always @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
      s_cur <= IDLE;
    end
    else begin
      s_cur <= s_next;
    end
  end

//-------------------------- Second state machine -------------------------------
/*
  wire [1 :0] s_n;
  assign s_n = (s_cur == IDLE)? (valid? ROUND: IDLE): ((t < 8'h64)? ROUND: IDLE);
  s_next = s_n;
*/

  always @(*) begin
    case (s_cur)
      IDLE:begin
        if(valid) begin
          s_next = ROUND;
        end
        else s_next = IDLE;
      end

      ROUND: begin
        if(t < 8'h64) begin
          s_next = ROUND;
        end
        else begin
          s_next = IDLE;
        end

      end
      default: s_next = IDLE;
    endcase
  end

//-------------------------- Third state machine -------------------------------
  always @(posedge clk or negedge rst_n) begin
    if(!rst_n)
      t <= 7'b0;
    else if(s_cur == ROUND) begin
      t <= t + 1'b1;
    end
    else t <= 7'b0;
  end
  assign ready_t = ((s_cur == ROUND) && (t == 8'h63)) ;
endmodule