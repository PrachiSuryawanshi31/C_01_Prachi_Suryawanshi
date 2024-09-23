/*wAP of tea cafe bill.
when customer gives greater than 20 tea cup then it got pr cup for 10 rs
otherwise customer gives less than 20 tea cup then it got per cup for 15 rs */
#include<stdio.h>
#include<conio.h>
int tea_cup(int cup)
{
    int total_bill;
    if(cup>20)
    {
       printf("you got per cup for 10 rs\n\n");
       total_bill=cup*10;
       printf("total bill=[%d]",total_bill);
    }
    else
    {
        printf("you got per cup for 15 rs \n\n");
        total_bill=cup*15;
       printf("total bill=[%d]",total_bill);
    }
    return 0;
}
int main()
{
    int cup_tea;
    printf("enter how many cup you buy ...");
    scanf("%d",& cup_tea);
    tea_cup(cup_tea);
}