
//Bresenham's Circle drawing algorithm
#include <graphics.h>
#include <iostream.h>
#include <math.h>
#include <dos.h>
#include <conio.h>
void display(int a,int b)
{
cout<<a<<", "<<b<<endl;
}
void drawCircle(int x,int y,int xc,int yc)
{
    putpixel(x+xc,y+yc,RED);
    putpixel(x+xc,-y+yc,YELLOW);
    putpixel(-x+xc,-y+yc,GREEN);
    putpixel(-x+xc,y+yc,YELLOW);
    putpixel(y+xc,x+yc,12);
    putpixel(y+xc,-x+yc,14);
    putpixel(-y+xc,-x+yc,15);
    putpixel(-y+xc,x+yc,6);
}
void main( )
{
clrscr();
int i,rad, d1;
float x,y,d,x1,y1;
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

cout<<"Enter the Radius of the Cirlce: ";
cin>>rad;
cout<<"Enter the Center points of the cirlce: ";
cin>>x1>>y1;
x=0;
y=rad;
d=5/4-rad;
while(x<=y)
{
 if(d<0)
 {
   drawCircle(x,y,x1,y1);
  // display(x,y);
   d1=d+4*x+6;
   x++;
   d=d1;
   delay(100);
 }
 else
 {
   drawCircle(x,y,x1,y1);
  // display(x,y);
   d1=d+4*x-4*y+10;
   x++; y--;
   d=d1;
   delay(100);
 }
}
getch();
closegraph();
}

