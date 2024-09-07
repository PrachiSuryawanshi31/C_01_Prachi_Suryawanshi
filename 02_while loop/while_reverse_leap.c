/*write a program while loop to print leap year take values from use and
 find ot the leap year by using function*/
#include<stdio.h>
#include<conio.h>
 void leap_year(int first_year,int last_year)
{
    while(first_year>=last_year)
    {
        if(first_year%4==0)
        {
        printf("[%d]\t",first_year);
        }
        first_year--;
    }
}
int main()
{
    int year1;
    int year2;
    printf("enter first year ");
    scanf("%d",&year1);
    printf("enter last year");
    scanf("%d",&year2);
    leap_year(year1,year2);
}
