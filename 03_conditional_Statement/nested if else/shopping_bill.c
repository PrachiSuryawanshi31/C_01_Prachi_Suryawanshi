/*WAP of shopping , discount,gst,total bill 
by using nested if else */
#include<stdio.h>
#include<conio.h>
void shopping(int shopping_amt)
{
    if(shopping_amt>2500 && shopping_amt<5000)
    {
        if(shopping_amt %2==0)
        {
            printf("shopping amount is=[%d]\n\n",shopping_amt);
            int discount=shopping_amt-500;
            printf("discount shopping amount is =[%d]\n\n",discount);
            int gst=discount*12/100;
            printf("gst of this shopping amount is=[%d]\n\n",gst);
            int total_bill=discount+gst;
            printf("total bill of shopping =[%d]\n\n",total_bill);
        }
        else
        {
            printf("you have no any discount");
            printf("total bill =[%d]\n\n",shopping_amt);

        }
    }
    else
    {
        if(shopping_amt>5000 && shopping_amt<10000)
        {
        
            printf("shopping amount is=[%d]\n\n",shopping_amt);
            int discount=shopping_amt-1000;
            printf("discount shopping amount is =[%d]\n\n",discount);
            int gst=discount*10/100;
            printf("gst of this shopping amount is=[%d]\n\n",gst);
            int total_bill=discount+gst;
            printf("total bill of shopping =[%d]\n\n",total_bill);
        }
        else
        {
            
            printf("thank youuu....");

        }
    }

}
int main()
{
    int shopping_amount;
    printf("enter the  shopping amount");
    scanf("%d",&shopping_amount);
    shopping(shopping_amount);
    return 0;
}