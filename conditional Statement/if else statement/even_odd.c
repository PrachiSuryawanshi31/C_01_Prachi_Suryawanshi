/*WAP to check gven number is even or odd*/
#include<stdio.h>
#include<conio.h>
void even_odd(int num)
{
    if((num%2)==0)
    {
        printf("Number is even...\n");
    }
    else
    {
        printf("Number is odd...\n");
    }
}
int main()
{
    int number;
    printf("enter value for number");
    scanf("%d",&number);
    even_odd(number);
    return 0;
}