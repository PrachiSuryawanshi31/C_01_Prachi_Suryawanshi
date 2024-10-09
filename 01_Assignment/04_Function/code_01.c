/*Create a function that takes two numbers as parameters and
returns their sum.*/

#include<stdio.h>
#include<conio.h>

int sum1(int num1,int num2)
{
    int sum=num1+num2;
    return sum;

}

int main()
{
    int ino1;
    int ino2;

    printf("enter first number: ");
    scanf("%d",&ino1);

    printf("enter second number : ");
    scanf("%d",&ino2);

    int sum=sum1(ino1,ino2);

    printf("*****sum of two number is *******\n");
    printf("sum is = %d ",sum);
    
}