#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,left=100,top=100,right=200,bottom=200,x=300,y=150,radius=50;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(120,150,230,200);
circle(x,y,radius);
bar(left + 300,top,right + 300,bottom);
line(left - 10,top + 150,left + 410,top + 150);
ellipse(x,y + 200,0,360,80,50);
for(radius=25;radius<=100;radius=radius+20)
circle(500,350,radius);
getch();
closegraph();
}