/*Write a program to calculate the factorial of a number using a
while loop.*/

#include<stdio.h>
#include<conio.h>


int factorial(int num)
{
    int icnt;
    int fact=1;

    for(icnt=1;icnt<=num;icnt++)
    {
        fact=fact*icnt;
    }
    printf("factorial of  %d  is = %d ",num,fact);
}

int main()
{
    int number;

    printf("enter number:");
    scanf("%d",&number);

    factorial(number);
}