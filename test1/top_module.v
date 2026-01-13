module top_module(
    input clk,
    input load,
    input [255:0] data,
    output [255:0] q ); 
    reg o [-1:16][-1:16];
    reg [255:0] p;
    integer j,k;
    integer i;
    integer c;
    always @(*)begin
        o[-1][-1] = q[255];
        o[-1][16] = q[240];
        o[16][-1] = q[15];
        o[16][16] = q[0];
        for(j=0;j<16;j=j+1)begin
            for(k=0;k<16;k=k+1)begin
                o[j][k]=q[16*j+k];
            end
        end
        for(k=0;k<16;k=k+1)begin
            o[-1][k] = q[240+k];
            o[16][k] = q[k];
        end
        for(j=0;j<16;j=j+1)begin
            o[j][-1] = q[j*16+15];
            o[j][16] = q[j*16];
        end
        for(j=0;j<16;j=j+1)begin
            for(k=0;k<16;k=k+1)begin
				c=0;
                if(o[j-1][k-1])begin c = c+1;end
                if(o[j-1][k])begin c = c+1;end
                if(o[j-1][k+1])begin c = c+1;end
                if(o[j][k-1])begin c = c+1;end
                if(o[j][k+1])begin c = c+1;end
                if(o[j+1][k-1])begin c = c+1;end
                if(o[j+1][k])begin c = c+1;end
                if(o[j+1][k+1])begin c = c+1;end
                if(c<=1||c>=4)begin 
                    p[j*16+k]=1'b0;
                end
				else if(c==3)begin
                    p[j*16+k]=1'b1;
                end else begin
					p[j*16+k]=p[j*16+k];
				end
            end
        end
    end
    always @(posedge clk)begin
        q <= (load)?data:p;
    end
endmodule
