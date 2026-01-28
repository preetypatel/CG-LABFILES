#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
int x1,y1,x2,y2,x,y,p,dx,dy;
int gd = DETECT,gm;
 initwindow(640,480);
printf("\nenter the x-coordinate of the first point::");
scanf("%d",&x1);
printf("\nenter the y-coordinate of the first point::");
scanf("%d",&y1);
printf("\nenter the x-coordinate of the second point::");
scanf("%d",&x2);
printf("\nenter the y-coordinate of the second point::");
scanf("%d",&y2);
if(x1 > x2)
    {
        int t;
        t=x1; x1=x2; x2=t;
        t=y1; y1=y2; y2=t;
    }
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
putpixel(x,y,2);
p=(2*dy-dx);
while(x<x2)
{
if(p<0)
{
x=x+1;
p=p+2*dy;
}
else
{
x=x+1;
y=y+1;
p=p+(2*dy)-(2*dx);
}
putpixel(x,y,7);
delay(50);
}
  outtextxy(200, 20, "BLA Algorithm Output");
    outtextxy(x1 + 5, y1 - 5, "(x1,y1)");
    outtextxy(x2 + 5, y2 - 5, "(x2,y2)");
getch();
closegraph();
}


