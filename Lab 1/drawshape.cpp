#include<stdio.h>
#include<graphics.h>
int main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"");
setcolor (WHITE);
putpixel (200,100,RED);
putpixel (500,400,YELLOW);
line (50,50,200,200);
setcolor (BLUE);
line (10,10,100,200);
setcolor (BROWN);
circle(300,200,50);
rectangle(500,400,300,200);
outtextxy(400,500,"preety");
setbkcolor(BLACK);
getch();
closegraph();
return 0;
}
