#include<graphics.h>
#include<conio.h>
void main()
{
int gd =DETECT,gm,drawing_color;
char a[100];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
drawing_color=getcolor();
sprintf(a,"current drawing color=%d",drawing_color);
outtextxy(10,10,a);
getch();
closegraph();
}