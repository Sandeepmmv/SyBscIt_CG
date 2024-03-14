
#include<stdio.h>
#include<graphics.h> 
void floodFill(int x,int y,int oldcolor,int newcolor) 
{ 
if(getpixel(x,y)==oldcolor) 
{ 
putpixel(x,y,newcolor); 
floodFill(x+1,y,oldcolor,newcolor); 
floodFill(x,y+1,oldcolor,newcolor); 
floodFill(x-1,y,oldcolor,newcolor); 
floodFill(x,y-1,oldcolor,newcolor); 
} 
} 
void main() 
{ 
int gm,gd=DETECT,radius; 
int x,y; 
printf("enter the x and y position dor circle\n"); 
scanf("%d%d",&x,&y); 
printf("enter the radius of circle\n"); 
scanf("%d",&radius);
initgraph(&gd,&gm,"C:\\turboc3\\bgi"); 
circle(x,y,radius); 
floodFill(x,y,0,15); 
delay(5000); 
closegraph(); 
}