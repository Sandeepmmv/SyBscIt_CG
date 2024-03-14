#include<graphics.h>
#include<conio.h>
void main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
circle(100,100,50);
setcolor(RED);
circle(200,200,50);
getch();
closegraph();
}