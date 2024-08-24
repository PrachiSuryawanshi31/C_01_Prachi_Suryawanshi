/*WAP to check given year is leap or not*/
#include<stdio.h>
#include<conio.h>
void leap_year(int year)
{
    if(year%4==0)
    {
        printf("year is leap year");
    }
    else
    {
        printf("year is not leap year");
    }
}
int main()
{
    int y;
    printf("enter year to check year is leap year or not");
    scanf("%d",&y);
    leap_year(y);
    return 0;
}