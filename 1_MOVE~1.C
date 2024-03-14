#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,x,y;
char message[100];
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
moveto(100,100);
moverel(100,-100);
x=getx();
y=gety();
sprintf(message,"Current x position=%d and y position=%d",x,y);
outtextxy(10,10,message);
getch();
closegraph();
}