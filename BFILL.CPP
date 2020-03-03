#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int translation(int x,int y,int tx,int ty)
{
	int x1,y1,i,j,k,ans[2];
	int p[3][1] ={ {x1},{y1},{1} } ,t[3][3] = { {1,0,tx},{0,1,ty},{0,0,1} } ,c[3][1]={{x},{y},{1}};
	  for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 1; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < 3; k++) 
                res[i][j] += t[i][k] * c[k][j]; 
            p[i][j] = res[i][j];
        }         
    } 
    ans[] = {x1,y1};
    return ans;
}
int rotate(int x,int y,float deg)
{
	int x1,y1,i,j,k,ans[2];
	int p[3][1] ={ {x1},{y1},{1} } ,t[3][3] = { {cos(deg),-sin(deg),0},{sin(deg),cos(deg),0},{0,0,1} } ,c[3][1]={{x},{y},{1}};
	  for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 1; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < 3; k++) 
                res[i][j] += t[i][k] * c[k][j]; 
            p[i][j] = res[i][j];
        }         
    } 
    ans[] = {x1,y1};
    return ans;
}

int scale(int x,int y,int sx,int sy)
{
	int x1,y1,i,j,k,ans[2];
	int p[3][1] ={ {x1},{y1},{1} } ,t[3][3] = { {sx,0,0},{0,sy,0},{0,0,1} } ,c[3][1]={{x},{y},{1}};
	  for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 1; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < 3; k++) 
                res[i][j] += t[i][k] * c[k][j]; 
            p[i][j] = res[i][j];
        }         
    } 
    ans[] = {x1,y1};
    return ans;
}
int reflectx(int x,int y)
{
	int x1,y1,i,j,k,ans[2];
	int p[3][1] ={ {x1},{y1},{1} } ,t[3][3] = { {1,0,0},{0,-1,0},{0,0,1} } ,c[3][1]={{x},{y},{1}};
	  for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 1; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < 3; k++) 
                res[i][j] += t[i][k] * c[k][j]; 
            p[i][j] = res[i][j];
        }         
    } 
    ans[] = {x1,y1};
    return ans;
}
int reflecty(int x,int y)
{
	int x1,y1,i,j,k,ans[2];
	int p[3][1] ={ {x1},{y1},{1} } ,t[3][3] = { {-1,0,0},{0,1,0},{0,0,1} } ,c[3][1]={{x},{y},{1}};
	  for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 1; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < 3; k++) 
                res[i][j] += t[i][k] * c[k][j]; 
            p[i][j] = res[i][j];
        }         
    } 
    ans[] = {x1,y1};
    return ans;
}
int reflecto(int x,int y)
{
	int x1,y1,i,j,k,ans[2];
	int p[3][1] ={ {x1},{y1},{1} } ,t[3][3] = { {-1,0,0},{0,-1,0},{0,0,1} } ,c[3][1]={{x},{y},{1}};
	  for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 1; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < 3; k++) 
                res[i][j] += t[i][k] * c[k][j]; 
            p[i][j] = res[i][j];
        }         
    } 
    ans[] = {x1,y1};
    return ans;
}
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x3,y3,tx,ty,sx,sy;
float deg;
initgraph(&gd,&gm,"C:\\turboc3\bgi");
printf("Enter the vertices of a triangle");
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
int arr[] = {x1,y1,x2,y2,x3,y3,x1,y1}; 
drawpoly(4,arr);
do{

switch(c)
{
	case 0:
	{
		break;
	}
	case 1:
	{
		printf("enter tx and ty");
		scanf("%d %d",&tx,&ty);
		translation(x1,y1,tx,ty);
		translation(x2,y2,tx,ty);
		translation(x3,y3,tx,ty);
		arr[] = {x1,y1,x2,y2,x3,y3,x1,y1}; 
		drawpoly(4,arr);		
		break;
	}
	case 2:
	{
		printf("enter degree");
		scanf("%f ",&deg);	
		rotate(x1,y1,deg);
		rotate(x2,y2,deg);
		rotate(x3,y3,deg);
		arr[] = {x1,y1,x2,y2,x3,y3,x1,y1}; 
		drawpoly(4,arr);
		break;
	}
	case 3:
	{
		printf("enter sx and sy");
		scanf("%d %d",&sx,&sy);
		translation(x1,y1,sx,sy);
		translation(x2,y2,sx,sy);
		translation(x3,y3,sx,sy);
		arr[] = {x1,y1,x2,y2,x3,y3,x1,y1}; 
		drawpoly(4,arr);
		break;
	}
	case 4:
	{
		reflectx(x1,y1);
		reflectx(x2,y2);
		reflectx(x3,y3);
		arr[] = {x1,y1,x2,y2,x3,y3,x1,y1}; 
		drawpoly(4,arr);		
		break;
	}
	case 5:
	{
		reflecty(x1,y1);
		reflecty(x2,y2);
		reflecty(x3,y3);
		arr[] = {x1,y1,x2,y2,x3,y3,x1,y1}; 
		drawpoly(4,arr);		
		break;
	}
	case 6:
	{
		reflecto(x1,y1);
		reflecto(x2,y2);
		reflecto(x3,y3);
		arr[] = {x1,y1,x2,y2,x3,y3,x1,y1}; 
		drawpoly(4,arr);
		break;
	}
	default:
	printf("check input");
}
while(c!=0)
getch();
closegraph();
}
