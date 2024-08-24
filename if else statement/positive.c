/*WAP to check the given number is positive or not*/
#include<stdio.h>
#include<conio.h>
void positive(int number)
{
    if(number>0)
    {
        printf("number is positive...");
    }
    else
    {
        printf("number is negative.. ");
    }
}
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    positive(num);
}