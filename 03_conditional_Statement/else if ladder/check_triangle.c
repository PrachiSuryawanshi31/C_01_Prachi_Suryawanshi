/*WAP to check whether triangle is  equilateral,isosceles or scalene triangle */

#include<stdio.h>
#include<conio.h>
void check_triangle(int side1,int side2, int side3)
{
   if(side1==side2 && side2== side3)
    {
        printf("this is equilateral triangle");
    }
    else if(side1==side2 || side2==side3 || side1==side3)
    {
        printf("triangle is isosceles triangle");
    }
    else
    {
        printf("this is scalene triangle");
    }

}
int main()
{
    int sides1;
    int sides2;
    int sides3;
    printf("enter  first side\n");
    scanf("%d",&sides1);
    printf("enter  second side\n");
    scanf("%d",&sides2);
    printf("enter  third side\n");
    scanf("%d",&sides3);
    check_triangle(sides1,sides2,sides3);
    return 0;

}
