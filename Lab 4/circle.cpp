#include<dos.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void draw_circle(int,int,int);
void symmetry(int,int,int,int);
int main()
{
int xc,yc,r;
int gd = DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
printf("enter the center of circle:\n");
printf("xc=");
scanf("%d",&xc);
printf("yc=");
scanf("%d",&yc);
printf("enter the radius of circle:");
scanf("%d",&r);
draw_circle(xc,yc,r);
getch();
closegraph();
}
void draw_circle(int xc,int yc,int rad)
{
int x=0;
int y=rad;
int p=1-rad;
symmetry(x,y,xc,yc);
for(x=0;y>x;x++)
{
if(p<0)
p+=2*x+3;
else
{
p+=2*(x-y)+5;
y--;
}
symmetry(x,y,xc,yc);
delay(50);
}
}
void symmetry(int x, int y, int xc,int yc)
{
putpixel(xc+x,yc-y,GREEN);
delay(50);
putpixel(xc+y,yc-x,GREEN);
delay(50);
putpixel(xc+y,yc+x,GREEN);
delay(50);
putpixel(xc+x,yc+y,GREEN);
delay(50);
putpixel(xc-x,yc+y,GREEN);
delay(50);
putpixel(xc-y,yc+x,GREEN);
delay(50);
putpixel(xc-y,yc-x,GREEN);
delay(50);
putpixel(xc-x,yc-y,GREEN);
delay(50);
  outtextxy(200, 20, "midpoint circle algorithm Output");
}
