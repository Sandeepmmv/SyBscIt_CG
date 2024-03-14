#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int gd,gm,errorcode;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
errorcode=graphresult();
if(errorcode !=grOk)
{
printf("Graphics error:%s\n",grapherrormsg(errorcode));
printf("Press any key to exit.");
getch();
exit(1);
}
getch();
closegraph();
}
