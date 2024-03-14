
#include<graphics.h>
#include<conio.h>
void main()
{
int gd =DETECT,gm,c,x=100,y=50;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(c=0;c<5;c++)
{
setlinestyle(c,0,2);
line(x,y,x+200,y);
y=y+25;
}
getch();
closegraph();
}
