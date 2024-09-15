/*WAP to print leap year take input from user*/
#include<stdio.h>
#include<conio.h>
void leap(int first_year,int last_year)
{
    do
    {
        if(first_year%4==0)
        {
            printf("[%d]\t",first_year);
        }
        first_year++;
    }
     while (first_year<=last_year);
    
}
int main()
{
    int year1;
    int year2;
    printf("enter first year");
    scanf("%d",&year1);
    printf("enter last year");
    scanf("%d",&year2);
    leap(year1,year2);
}