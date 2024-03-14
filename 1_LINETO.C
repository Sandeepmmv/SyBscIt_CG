#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
moveto(100,150);
lineto(200,250);
getch();
closegraph();
}
