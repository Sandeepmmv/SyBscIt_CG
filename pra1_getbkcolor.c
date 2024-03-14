#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm;
struct arccoordstype a;
char arr[100];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
arc(250,200,0,90,100);
getarccoords(&a);
sprintf(arr,"(%d,%d)",a.xstart,a.ystart);
outtextxy(360,195,arr);
sprintf(arr,"(%d,%d)",a.xend,a.yend);
outtextxy(245,85,arr);
getch();
closegraph();
}