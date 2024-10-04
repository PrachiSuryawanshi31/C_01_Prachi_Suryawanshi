/* Create a program that calculates the area of a circle using the
Math.PI constant.*/

#include<stdio.h>
#include<conio.h>

int area(int r)
{
    int PI=3.14;

    int area=PI*r*r;

    printf("Area=%d \n",area);
}

int main()
{
    int redius;
    printf("enter redius \n");
    scanf("%d",&redius);

    int iRet=area(redius);
}