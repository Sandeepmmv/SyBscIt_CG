#include<graphics.h>
#include<conio.h>
void main()
{
int gd = DETECT,gm,midx,midy;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
midx=getmaxx()/2;
midy=getmaxy()/2;
setviewport(midx-50,midy-50,midx+50,midy+50,1);
circle(50,50,55);
getch();
closegraph();
}