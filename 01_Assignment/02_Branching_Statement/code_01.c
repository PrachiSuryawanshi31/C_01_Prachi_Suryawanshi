/*Write a program that checks whether a given number is
positive, negative, or zero using an if-else statement.*/

#include<stdio.h>
#include<conio.h>

int check_number(int num)
{
    if(num>0)
    {
        printf("%d is Positive Number",num);
    }
    else if(num<0)
    {
        printf("%d  is Negative Number",num);
    }
    else 
    {
        printf("%d is Zero",num);
    }
    
}

int main()
{
    int number;

    printf("enter  number \n");
    scanf("%d",&number);

   

    int iRet=check_number(number);
}