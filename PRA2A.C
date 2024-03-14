#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int midx,midy;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cleardevice();
midx=getmaxx()/2;
midy=getmaxy()/2;
line(1,midy,640,midy);
line(midx,1,midx,480);
setcolor(RED);
circle(midx+(-150),midy-(120),40);
printf("\t\tIt's a circle");
setcolor(GREEN);
rectangle(midx+(100),midy-(100),midx+(200),midy-(150));
printf("\t\t\t\tThis is Rectangle\n\n\n\n\n");
setcolor(BLUE);
ellipse(midx+(-150),midy-(-100),0,360,midx+(-250),midy-(200));
printf("\n\n\n\n\n\n\n\n\n\n\n\t wow!!IT's an ellipse");
setcolor(YELLOW);
ellipse(midx+(180),midy-(-100),180,0,midx+(-200),midy-(150));
printf("\t\t\t Ohh!!half ellipse! looks like:)");
getch();
}