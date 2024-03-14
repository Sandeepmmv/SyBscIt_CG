#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,x=600,i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(x=0;x<250;x++)
{
x%=250;
setcolor(random(16));
circle(random(635),random(70),50);
circle(random(635),random(70),50);
circle(random(635),random(70),50);
circle(random(635),random(70),50);
circle(random(635),random(70),50);
clearviewport();
settextstyle(1,0,5);
setcolor(RED);
outtextxy(50,415-2*x,"*World*");
setcolor(GREEN);
outtextxy(200,415-2*x,"*of*");
setcolor(YELLOW);
outtextxy(350,415-2*x,"*graphics*");
}
getch();
}