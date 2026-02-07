Title:bresenhem line algorithm.
algorithm:
1.input the two line end-points,sorting the left end-points in(x0,y0).
2. plot the points(x0,y0).
3.calculate the constants delx,dely,2dely and(2dely-2delx) and get the first value for the decision parameter as:
                    p0=2dely-delx
4.at each xk along the line ,starting at k=0,perform the following test . if pk<0,the next point to plot is(xk+1,yk)and:
                    pk+1=pk+2dely
  otherwise,the next point to plot is(xk+1,yk+1) and :
                    pk+1=pk+2dely-2delx
5.repeat step 4(delx - 1)times

conclusion: we used this algorithm to create more straight line as this algorithm doesnot contain round off error like DDA.
                    
