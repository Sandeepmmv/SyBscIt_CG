#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(RED);
circle(100,100,50);
floodfill(100,100,RED);
getch();
closegraph();
}