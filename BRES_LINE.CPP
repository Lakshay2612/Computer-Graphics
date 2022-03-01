
//Bresenham's line drawing algorithm
#include <graphics.h>
#include <iostream.h>
#include <math.h>
#include <dos.h>
#include <conio.h>
void main( )
{
clrscr();
float x,y,x1,y1,x2,y2,dx,dy,slope;
int gdriver = DETECT,gmode;
int i,d;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

cout<<"Enter the value of x1 and y1 : ";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2: ";
cin>>x2>>y2;

dx=abs(x2-x1);
dy=abs(y2-y1);
int a,b;
a=2*dy;
b= -2*dx;
x=x1; y=y1;
int d1;
d=2*dy-dx;
while(x!=x2+1&&y!=y2+1)
{
 if(d>0)
 {
   putpixel(x,y,RED);
   d1=d+a+b;
   x++; y++;
   d=d1;
   delay(150);
 }
 else
 {
   putpixel(x,y,RED);
   d1=d+a;
   x++;
   d=d1;
   delay(100);
 }
}
closegraph();
}

