
#include<graphics.h>
#include<conio.h>
void main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtext("Press any key to change the background color to Green.");
getch();
setbkcolor(GREEN);
getch();
closegraph();
}
