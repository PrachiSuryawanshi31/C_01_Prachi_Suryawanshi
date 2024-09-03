/*Write a program of switch to print the name of month
 by using function */
#include<stdio.h>
#include<conio.h>
void check_month(int month1)
{
    switch(month1)
    {
        case 1:
        printf("January");
        break;

        case 2:
        printf("February");
        break;

        case 3:
        printf("March");
        break;

        case 4:
        printf("April");
        break;

        case 5:
        printf("May");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("Jully");
        break;

        
        case 8:
        printf("Augest");
        break;

        case 9:
        printf("Saptember");
        break;

        case 10:
        printf("Octomber");
        break;

        case 11:
        printf("November");
        break;

        case 12:
        printf("December");
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