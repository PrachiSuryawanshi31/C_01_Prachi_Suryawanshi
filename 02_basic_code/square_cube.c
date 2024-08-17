#include<stdio.h>
#include<conio.h>
void square(int ino)
{
    int square=ino*ino;
    printf("square of ino=[%d]\n",square);
}
void cube(int ivalue)
{
    int cube=ivalue*ivalue*ivalue;
    printf("cube of ivalue=[%d]\n",cube);
}
int main()
{
    int a;
    printf("enter vakue for a=");
    scanf("%d",&a);
    square(a);
printf("***********************************************\n");
    int b;
    printf("enter value for b=");
    scanf("%d",&b);
    cube(b);
    return 0;
}