#include<graphics.h>
#include<conio.h>
void main()
{
int gd = DETECT,gm,height;
char array[100];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
height=textheight("Graphics Practical");
sprintf(array,"Texheight=%d",height);
outtext(array);
getch();
closegraph();
}