module sha1_con(
  input         clk   ,
  input         rst_n ,
  input         valid ,

  output [7 :0] reg t,
  output ready_t
);

  parameter IDLE  = 2'b00;
//  parameter INIT  = 2'b01;
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
//--- It can be optimized ---
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

  always @(posedge clk or negedge rst_n) begin
    if(!rst_n)
      ready_t <= 1'b0;
    else if(t == 8'h63)
      ready_t <= 1'b1;
    else ready_t <= 1'b0;
  end
// assign ready_t = ((s_cur == ROUND) && (t == 8'h63)) 
endmodule