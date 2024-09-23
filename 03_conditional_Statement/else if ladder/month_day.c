/*WAP of month .print month name and how many days in that month
 depending upon month number,
by using if else ladder*/
#include<stdio.h>
#include<conio.h>
void month(int month_day)
{
    if(month_day==1)
    {
        printf("this is january \nin January  31 days");
    }
    else if(month_day==2)
    {
        printf("this is february \n in February  29 days");
    }
    else if(month_day==3)
    {
        printf("this is march \nin March 31 days");
    }
    else if(month_day==4)
    {
        printf("this is april \nin April  30 days");
    }
    else if(month_day==5)
    {
        printf("this is may \n in may 31 days");
    }
    else if(month_day==6)
    {
        printf("this is june \n in june  30 days");
    }
    else if(month_day==7)
    {
        printf("this is jully \n in jully  31 days");
    }
    else if(month_day==8)
    {
        printf("this is Augest \nin Augest 30 days");
    }
    else if(month_day==9)
    {
        printf("this is september \n in september  31 days");
    }
    else if(month_day==10)
    {
        printf("this is octomber \n in octomber  31 days");
    }
    else if(month_day==11)
    {
        printf("this is november \n in november  30 days");
    }
    else if(month_day==12)
    {
        printf("this is december \nin december  31 days");
    }


}
int main()
{
    int num;
    printf("enter number of your month and got how many days in that month");
    scanf("%d",&num);
    month(num);
    return 0;
}