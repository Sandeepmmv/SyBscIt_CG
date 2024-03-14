#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,bytes;
char array[100];
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
circle(200,200,50);
line(150,200,250,200);
line(200,150,200,150);
bytes=imagesize(150,150,250,250);
sprintf(array,"Number of bytes required to store required area=%d",bytes);
outtextxy(10,280,array);
getch();
closegraph();
}