/* Write an  function that returns the factorial of a number*/

#include<stdio.h>
#include<conio.h>


int Calculate_Factorial(int num)
{
    int icnt;
    int fact=1;

    for(icnt=1;icnt<=num;icnt++)
    {
        fact=fact*icnt;
    }

    printf("Factorial of %d is =%d" ,num,fact);
}
int main()
{
    int number;

    printf("enter number:");
    scanf("%d",&number);

    Calculate_Factorial(number);
}