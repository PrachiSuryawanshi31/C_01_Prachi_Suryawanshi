/*Write a program of switch to print the name of month and 
 how many days in that month
 by using function */
#include<stdio.h>
#include<conio.h>
void check_month(int month1)
{
    switch(month1)
    {
        case 1:
        printf("January\n\n in january 31 days");
        break;

        case 2:
        printf("February \n\n in february 28 days");
        break;

        case 3:
        printf("March \n\n in march 31 days");
        break;

        case 4:
        printf("April \n\n in april 30 days");
        break;

        case 5:
        printf("May \n\n in may 31 days");
        break;

        case 6:
        printf("June \n\n in june 30 days");
        break;

        case 7:
        printf("Jully\n\n in jully 31 days ");
        break;

        
        case 8:
        printf("Augest \n\n in augest 31 days");
        break;

        case 9:
        printf("Saptember\n\n in saptember 30 days");
        break;

        case 10:
        printf("Octomber\n\n in octomber 31 days");
        break;

        case 11:
        printf("November \n\n in november 30 days");
        break;

        case 12:
        printf("December \n\n in december 31 day");
        break;
    }

}
int main()
{
    int month;
    printf("enter number  to find name of month");
    scanf("%d",&month);
    check_month(month);
     
}