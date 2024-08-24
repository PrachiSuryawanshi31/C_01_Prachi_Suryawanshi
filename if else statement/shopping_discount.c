/*WAP of shopping .when your shopping amount is grater than 5000,
then you got 1000 rs discount otherwise no any discount*/
#include<stdio.h>
#include<conio.h>
void discount(int shopping_amount )
{
    int dis=1000;
    if(shopping_amount>=5000)
    {
        printf("you got 1000 rs discount...\n\n");
         int total_amount=shopping_amount-dis;
        printf("total bill of your shopping is [%d]....\n\n",total_amount);
    }
    else
    {
         int total_amount=shopping_amount-dis;
        printf("total bill of your shopping is [%d]....\n\n",total_amount);
    }
}
int main()
{
    int shopping;
    printf("enter your shopping amount");
    scanf("%d",&shopping);
    discount(shopping);
    return 0;
}