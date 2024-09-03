/*Write a program of switch to print the name of week day by using function */
#include<stdio.h>
#include<conio.h>
void week_day(int day)
{
    switch(day)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("thuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;
    }

}
int main()
{
    int days;
    printf("enter number  to find name of day");
    scanf("%d",&days);
     week_day(days);
     
}