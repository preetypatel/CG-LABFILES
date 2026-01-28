#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"");
outtext("graphics mode initialized successfully");
getch();
closegraph();
return 0;
}
