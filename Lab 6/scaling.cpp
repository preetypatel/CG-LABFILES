#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
int gd=DETECT,gm;
float x1,y1,x2,y2,sx,sy,x3,y3,x4,y4;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
printf("enter the starting point of coordinate:");
scanf("%f%f",&x1,&y1);
printf("enter the ending point of coordinate:");
scanf("%f%f",&x2,&y2);
printf("enter the scaling factor sx,sy:\n");
scanf("%f%f",&sx,&sy);
setcolor(5);
line(x1,y1,x2,y2);
outtextxy(x2+2,y2+2,"original line");
x3=x1*sx;
y3=y1*sy;
x4=x2*sx;
y4=y2*sy;
setcolor(7);
line(x3,y3,x4,y4);
outtextxy(x3+2,y3+2,"line after scaling  ");
getch();
}

