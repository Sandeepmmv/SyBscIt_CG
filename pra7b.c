#include<graphics.h> 
#include <stdlib.h> 
#include <math.h> 
#include <conio.h> 
void reset (int h[][2]) 
{ 
int val[9][2]={{50,50},{75,50},{75,75},{100,75},{100,50},{125,50},{125,100},{87,125},{ 50, 100}}; 
int i; 
for(i=0;i<9;i++) 
{ 
h[i][0]=val[i][0]-50; 
h[i][1]=val[i][1]-50; 
} 
} 
void draw(int h[][2]) 
{ 
int i; 
setlinestyle(DOTTED_LINE,0,1); 
line(320,0,320, 480); 
line(0,240,640, 240); 
setlinestyle(SOLID_LINE,0,1); 
for (i=0; i<8; i++) 
line(320+h[i][0],240-h[i][1],320+h[i+1][0],240-h[i+1][1]); 
line(320+h[0][0],240-h[0][1],320+h[8][0],240-h[8][1]); 
} 
void rotate(int h[][2],float angle) 
{ 
int i; 
for(i=0;i<9;i++) 
{ 
int xnew,ynew; 
xnew=h[i][0]*cos(angle)-h[i][1]*sin(angle); 
ynew=h[i][0]*sin(angle)+h[i][1]*cos(angle); 
h[i][0]=xnew;h[i][1]=ynew; 
} 
} 
void scale(int h[][2],int sx,int sy) 
{ 
int i; 
for(i=0;i<9;i++) 
{ 
h[i][0]*=sx; 
h[i][1]*=sy; 
} 
} 
void translate(int h[][2],int dx,int dy) 
{ 
int i; 
for(i=0;i<9;i++) 
{ 
h[i][0]+=dx; 
h[i][1]+=dy; 
} 
} 
void reflect(int h[][2],int m,int c) 
{ 
int i; 
float angle; 
for(i=0;i<9;i++) 
h[i][1] -=c 
angle=m-PI/2-atan(m); 
rotate (h, angle); 
for(i=0;i<9;i++) 
h[i][0] = -h [i][0] 
angle = -angle; 
rotate(h,angle); 
for(i=0;i<9;i++) 
h[i][1] +=c; 
} 
void ini() 
{ 
int gd=DETECT,gm; 
initgraph(&gd,&gm,"C:\\turboc3\\bgi"); 
} 
void dini() 
{ 
getch(); 
closegraph(); 
} 
void main() 
{ 
int h[9][2],sx,sy,x,y,m,c,choice; 
do 
{ 
clrscr(); 
printf("1. Scaling about the origin.\n"); 
printf("2.Scalingaboutanarbitrarypoint.\n"); 
printf("3.Reflectionabouttheliney=mx+c.\n"); printf("4.Exit\n"); 
printf("Enterthechoice:"); 
scanf("%d",&choice); 
switch(choice) 
{ 
case 1:printf("Enterthex-andy-scalingfactors:"); 
scanf("%d%d", &sx, &sy); 
ini(); 
reset(h); 
draw(h); 
getch(); 
scale(h,sx,sy); 
cleardevice(); 
draw (h); 
dini(); 
break: 
case 2:printf("Enterthex-andy-scalingfactors:"); 
scanf("%d%d", &sx, &sy); 
printf("Enterthex-andy-coordinatesofthepoint:"); 
scanf("%d%d", &x, &y); 
ini(); 
reset (h); 
translate(h,x,y); 
draw(h);  
getch(); 
cleerdevice(); 
translate(h,-x,-y); 
draw(h); 
getch(); 
cleardevice(); 
scale(h,sx,sy); 
draw(h); 
getch(); 
translate(h,x,y); 
cleardevice(); 
draw(h); 
putpixel(320+x,240-y,WHITE); dini(); 
break; 
case3:printf("Enterthevaluesofmande:");  
scanf("%d%d", &m, &c); 
ini(); 
reset(h); 
draw(h); 
getch(); 
reflect(h,m,c); 
cleardevice(); 
draw(h); 
case1:printf("Enterthex-andy-scalingfactors:"); 
scanf("%d%d", &sx, &sy); 
ini(); 
reset(h); 
draw(h);getch(); 
scale(h,sx,sy); 
cleardevice(); 
draw(h); 
dini(); 
break; 
case2:printf("Enterthex-andy-scalingfactors:"); 
scanf("%d%d",&sx,&sy); 
printf("Enterthex-andy-coordinatesofthepoint:"); 
scanf("%d%d", &x, &y); 
ini(); 
reset (h); 
translate(h,x,y); 
draw(h); 
getch(); 
cleerdevice(); 
translate(h,-x,-y); 
draw(h); 
getch(); 
cleardevice(); 
scale(h,sx,sy); 
draw(h); 
getch(); 
translate(h,x,y); 
cleardevice(); 
draw (h); 
putpixel(320+x,240-y,WHITE); 
dini(); 
break; 
case3:printf("Enterthevaluesofmande:"); 
scanf("%d%d", &m, &c); 
ini(); 
reset(h); 
draw(h); 
getch(); 
reflect(h,m,c); 
cleardevice(); 
draw (h); 
dini(); 
break; 
case4: exit(0); 
} 
} 
while(choice!=4); 
}