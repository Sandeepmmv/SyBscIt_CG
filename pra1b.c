#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm;
int midx,midy;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cleardevice();
midx=getmaxx()/2;
midy=getmaxy()/2;
line(1,midy,640,midy);
line(midx,1,midx,480);
getch();
}