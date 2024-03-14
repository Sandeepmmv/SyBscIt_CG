
#include<graphics.h>
#include<conio.h>
void main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setfillstyle(XHATCH_FILL,RED);
circle(100,100,50);
floodfill(100,100,WHITE);
getch();

closegraph();
}
