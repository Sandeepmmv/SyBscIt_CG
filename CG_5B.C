#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void disp();
float x,y;
int xc,yc;
void main()
{
int gd= DETECT,gm;
int a,b;
float p1,p2;
clrscr();
initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
printf("*** BResenham's Midpoint algorithm of cirlce ***\n");
printf("Enter xc:\t");
scanf("%d",&xc);
printf("Enter yc:\t");
scanf("%d",&yc);
printf("Enter a:\t");
scanf("%d",&a);
printf("Enter b:\t");
scanf("%d",&b);
x=0; y=b;
disp();
p1= (b*b)-(a*a*b)+(a*a)/4;
while((2.0*b*b*x)<=(2.0*a*a*y))
{
x++;
if(p1<=0)
p1= p1+(2.0*b*b*x)+(b*b);
else
{
y--;
p1= p1+(2.0*b*b*x)+(b*b)-(2.0*a*a*y);
}
disp();
x=-x;
disp();
x=-x;
}
x=a;
y=0;
disp();
p2=(a*a)+2.0*(b*b*a)+(b*b)/4;
while((2.0*b*b*x)>(2.0*b*b*y))
{
y++;
if(p2>0)
p2= p2+(a*a)-(2.0*a*a*y);
else
{
x--;
p2= p2+(2.0*b*b*x)-(2.0*a*a*y)+(a*a);
}
disp();
y=-y;
disp();
y=-y;
}
getch();
closegraph();
}
void disp()
{
putpixel(xc+x,yc+y,10);
putpixel(xc-x,yc+y,10);
putpixel(xc+x,yc-y,10);
putpixel(xc+x,yc-y,10);
}