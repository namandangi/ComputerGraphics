#include<conio.h>
#include<graphics.h>

void ffill(int x,int y,int ncolor,int ocolor)
{
	if(getpixel(x,y)==ocolor)
	{
		putpixel(x,y,ncolor);
		ffill(x+1,y,ncolor,ocolor);
		ffill(x-1,y,ncolor,ocolor);
		ffill(x,y+1,ncolor,ocolor);
		ffill(x,y-1,ncolor,ocolor);
	}
}

void main()
{
	int gm , gd = DETECT;
	int x,y,top,left,right,bottom,ncolor,ocolor;
	clrscr();
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	top = left =50;
	bottom = right = 100;
	rectangle(left,top,right,bottom);
	x = y = 51;
	ncolor = 12;
	ocolor = 0;
	ffill(x,y,ncolor,ocolor);
	getch();
}