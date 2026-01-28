#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
char lnflag;
int polygonpoints[3][2]={{10,100},{110,100},{110,200}};
void polyline()
{
int iCnt;
cleardevice();
line(0,240,640,240);
line(320,0,320,480);
for(iCnt=0;iCnt<3;iCnt++)
{
line (polygonpoints[iCnt][0],polygonpoints[iCnt][1],
     polygonpoints[(iCnt+1)%3][0],polygonpoints[(iCnt+1)%3][1]);
}
}
void reflect()
{
float angle;
int iCnt;
int tx,ty;
printf("endl");
for(iCnt=0;iCnt<3;iCnt++)
polygonpoints[iCnt][1]=(480-polygonpoints[iCnt][1]);
}
int main()
{
int gDriver=DETECT,gMode;
int iCnt;
initgraph(&gDriver,&gMode,"c:\\turboc3\\BGI");
for(iCnt=0;iCnt<3;iCnt++)
{
polygonpoints[iCnt][0]+=320;
polygonpoints[iCnt][1]=240-polygonpoints[iCnt][1];
}
polyline();
outtextxy(50,50,"Reflection along X axis");
getch();
reflect();
polyline();
getch();

}
