/*WAP of week day. print the week day name depending upon week day number,
by using if else ladder */

#include<stdio.h>
#include<conio.h>
void days(int week_day)
{
    if(week_day==1)
    {
        printf("this is Monday");
    }
    else if(week_day==2)
    {
        printf("this is thuesday");
    }
    else if(week_day==3)
    {
        printf("this is wednesday");
    }
    else if(week_day==4)
    {
        printf("this is thursday");
    }
    else if(week_day==5)
    {
        printf("this is friday");
    }
    else if(week_day==6)
    {
        printf("this is saturday");
    }
    else if(week_day==7)
    {
        printf("this is sunday");
    }
}
int main()
{
    int day;
    printf("enter day number and got name of day");
    scanf("%d",&day);
    days(day);
    return 0;
}