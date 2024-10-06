/* Write a switch-case program that takes a day of the week as
input and prints the corresponding day name (e.g., 1 =
Monday).*/

#include<stdio.h>
#include<conio.h>

void week_day(int day)
{
    switch(day)
    {
        case 1:
        printf("%d  is Monday \n",day);
        break;

        case 2:
        printf("%d  is Tuesday \n",day);
        break;

        case 3:
        printf("%d  is  Wednesday \n",day);
        break;

        case 4:
        printf("%d  is Thursday \n",day);
        break;

        case 5:
        printf("%d  is Friday \n",day);
        break;

        case 6:
        printf("%d  is Saturday \n",day);
        break;

        case 7:
        printf("%d  is Sunday \n",day);
        break;

        default:
        printf("in week there are only 7 days\n");
        break;


    }

}

int main()
{
    int day;

    printf("enter any number of day and get name of day\n");
    scanf("%d",&day);


    week_day(day);
}