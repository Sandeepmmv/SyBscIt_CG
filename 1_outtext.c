#include<graphics.h>
#include<conio.h>
void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtext("To dispaly text at a particular position on the sreecn use outtext");
getch();
closegraph();
}