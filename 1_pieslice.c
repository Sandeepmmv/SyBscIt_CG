#include<graphics.h>
#include<conio.h>
void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
pieslice(200,200,0,135,100);
getch();
closegraph();
}
