Title:digital differential analyzer algorithm
Algorithm:
1.start
2.declare variable x,y,x1,y1,x2,y2,k,dx,dy,s,xi,yi and also declare gdriver=DETECT,mode.
3.initialize the graphics mode with the path location in turboC3 folder.
4.input two line end-points and store the left end-points in (x1,y1).
5.load(x1,y1) into the frame buffer ;that is , plot the first point.put x=x1,y=y1.
6.calculate dx=x2-x1 and dy=y2-y1.
7.if abs(dx)>abs(dy),do s=abs(dx).
8.otherwise s=abs(dy).
9.then xi=dx/s and yi=dy/s.
10.start from k=0 and continuing till k<s,the points will be
           i.x=x+xi.
          ii.y=y+yi.
11.plot pixel using putpixel at points(x,y)in specified color
12.close graph and stop.

Conclusion:Here we learnt about the use of DD line algorithm.in this algorithm,we needed to 
            round up decimal points value to get pixel value which would create some round off occur.
