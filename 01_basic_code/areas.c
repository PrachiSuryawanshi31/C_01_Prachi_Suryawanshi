#include<stdio.h>
#include<conio.h>
void area_circle(int redius)
{
    int area=3.14*redius*redius;
    printf("Area of circle=[%d]\n",area);
    printf("\n");
}
void area_square(int side)
{
    int area=side*side;
    printf("area of square=[%d]\n",area);
    printf("\n");
}
void area_rectangle(int length,int width)
{
    int area=length*width;
    printf("area of rectangle=[%d]\n",area);
    printf("\n");
}
void area_triangle(int height,int breadth)
{
    int area=height*breadth/2;
    printf("area of triangle=[%d]\n",area);
    printf("\n");
}
int main()
{
    int r;
    printf("enter redius of circle=");
    scanf("%d",&r);
     area_circle(r);

   int sq_side;
   printf("enter side of square=");
   scanf("%d",&sq_side);
    area_square(sq_side);

   int l,w;
   printf("enter length of rectangle=");
   scanf("%d",&l);
   printf("enter  width of rectangle=");
   scanf("%d",&w);
   area_rectangle(l,w);

   int h,b;
   printf("enter height of trianglr=");
   scanf("%d",&h);
    printf("enter breadth of trianglr=");
   scanf("%d",&b);
   area_triangle(h,b);
    return 0;
}