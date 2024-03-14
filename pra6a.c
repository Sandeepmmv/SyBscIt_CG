#include<graphics.h>
#include<stdio.h>
void main()
{
int i;
int gd=DETECT,gm;
int x2,y2,x1,y1,x,y;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the 2 line end points:x1,y1,x2,y2:\n");
scanf("%d\n%d\n%d\n%d",&x1,&y1,&x2,&y2);
line(x1,y1,x2,y2);
printf("\nEnter scaling co-ordinates;x\ty\t\n");
scanf("%d%d",&x,&y);
x1=(x1*x);
y1=(y1*y);
x2=(x2*x);
y2=(y2*y);
printf("Line after scaling");
line(x1,y1,x2,y2);
getch();
closegraph();
}
