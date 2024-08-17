#include<stdio.h>
#include<conio.h>
void circle(int redius)
{
    int perimeter=2*3.14*redius;
    printf("perimeter of circle=[%d]\n",perimeter);
    printf("\n");
}
void square(int side)
{
    int perimeter=side*side*side*side;
    printf("perimeter of square=[%d]\n",perimeter);
     printf("\n");
}
void reactangle(int length,int width)
{
    int perimeter=(length+width)/2;
    printf("perimeter of reactangle=[%d]\n",perimeter);
     printf("\n");
}
void triangle(int a,int b,int c)
{
    int perimeter=a+b+c;
    printf("perimeter of triangle=[%d]\n",perimeter);
     printf("\n");
}
int main()
{
    int r;
    printf("enter redius of circle=");
    scanf("%d",&r);
    circle(r);

    int s;
    printf("enter side of square=");
    scanf("%d",&s);
    square(s);

    int l,w;
    printf("enter length of reactangle=");
    scanf("%d",&l);
    printf("enter width of reactangle=");
    scanf("%d",&w);
    reactangle(l,w);

    int h,b,hypo;
    printf("enter height of triangle=");
    scanf("%d",&h);
    printf("enter breadth of triangle=");
    scanf("%d",&b);
    printf("enter hyotenius of triangle=");
    scanf("%d",&hypo);
    triangle(h,b,hypo);

    return 0;
}