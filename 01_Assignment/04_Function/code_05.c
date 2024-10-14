/*Create an arrow function that checks if a number is even or
odd.*/

#include<stdio.h>
#include<conio.h>

int checkEvenNO(int number)
{
    if(number %2 ==0)
    {
        printf("%d is even number ",number);
    }
    else
    {
        printf("%d is odd number",number);
    }
}

int main()
{
    int ino;

    printf("enter number:");
    scanf("%d",&ino);

    checkEvenNO(ino);
}