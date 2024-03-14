#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
moveto(250,250);
linerel(100,-100);
getch();
closegraph();
}