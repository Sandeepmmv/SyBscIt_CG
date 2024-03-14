#include<graphics.h>
#include<conio.h>
void main()
{
int gd = DETECT,gm,width;
char array[100];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
width=textwidth("Graphics Practical");
sprintf(array,"Texheight=%d",width);
outtext(array);
getch();
closegraph();
}