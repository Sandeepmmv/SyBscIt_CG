#include<graphics.h>
#include<conio.h>
void main()
{
int gd = DETECT,gm,x=25,y=25,font=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(font=0;font<=10;font++)
{
settextstyle(font,HORIZ_DIR,1);
outtextxy(x,y,"Text with different fonts ");
y=y+25;
}
getch();
closegraph();
}