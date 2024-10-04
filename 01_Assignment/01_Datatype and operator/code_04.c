/* Write a program to check if a given number is even or odd
using the modulus operator*/

#include<stdio.h>
#include<conio.h>

int check_number(int ino)
{
    if(ino%2==0)
    {
        printf("%d is even number",ino);
    }

    else
    {
        printf("%d is odd number",ino);
    }
}

int main()
{


    printf("check number is even or odd \n");

    int number;
    printf("enter any number ");
    scanf("%d",&number);

    int iret=check_number(number);
}