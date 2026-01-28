Title:midpoint circle algorithm
 Algorithm:

Initialization: Start with x = 0, y = r, and calculate the initial decision parameter P = 1 - r (or P = 5/4 - r, depending on formulation).
Plot Initial Point: Plot (0, r) and its symmetric counterparts in all 8 octants.
Iterate: While x < y:
Increment x by 1 (x = x + 1).
Check P:
If P < 0 (midpoint inside): The next pixel is (x, y). Update P = P + 2x + 1.
If P >= 0 (midpoint outside or on boundary): The next pixel is (x, y-1). Update P = P + 2x - 2y + 1, and decrement y (y = y - 1).
Plot the new point (x, y) and its symmetric points.
Repeat until x >= y (one octant is complete).

conclusion:
The Midpoint Circle Algorithm is an efficient rasterization method for drawing circles on pixel displays. 
It uses a decision parameter to choose the closest pixel to the true circle at each step and exploits the eight-way symmetry of a circle to reduce computation.
By using only simple integer calculations, it avoids heavy arithmetic like square roots, making it fast and suitable for real-time graphics rendering.
