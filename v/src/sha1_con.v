module sha1_con(
  input         clk     ,
  input         rst_n   ,
  input         valid   ,

  output [7 :0] t       ,
  output        ready_t
);

  parameter IDLE  = 2'b00;
  parameter ROUND = 2'b01;

  reg [7 :0] t_tem;
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
  always @(*) begin
    case (s_cur)
      IDLE:begin
        if(valid) begin
          s_next = ROUND;
        end
        else s_next = IDLE;
      end

      ROUND: begin
        if(t < 8'h50) begin
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
      t_tem <= 8'b0;
    else if(s_cur == ROUND) begin
      t_tem <= t_tem + 1'b1;
    end
    else begin
      t_tem <= 8'b0;
    end
  end
  
//-------------------------------- Result --------------------------------------
  assign ready_t = ((s_cur == ROUND) && (t == 8'h50)) ;
  assign t = t_tem;

endmodule

