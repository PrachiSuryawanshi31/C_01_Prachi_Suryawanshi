/*WAP of shopping. to calculate totl billof your shopping 
include gst and discount
by using if else ladder.*/
#include<stdio.h>
#include<conio.h>
void shopping(int shopping_amt)
{
    int dis;
    int gst;
    int total_bill;
  if(shopping_amt>2500 && shopping_amt<=5000)
  {
    printf("your shopping amount is=%d\n\n",shopping_amt);
    dis=shopping_amt-400;
    printf("your discount amount on shopping_amount=%d\n\n",dis);
    gst=dis*15/100;
    printf("your gst on your shopping amount is=%d\n\n",gst);
    total_bill=gst+dis;
    printf("your total bill include gst and discount=%d\n\n",total_bill);
 }
 else if(shopping_amt>5000 && shopping_amt<=8000)
  {
    printf("your shopping amount is=%d\n\n",shopping_amt);
    dis=shopping_amt-600;
    printf("your discount amount on shopping_amount=%d\n\n",dis);
    gst=dis*12/100;
    printf("your gst on your shopping amount is=%d\n\n",gst);
    total_bill=gst+dis;
    printf("your total bill include gst and discount=%d\n\n",total_bill);
 }
 else if(shopping_amt>10000 && shopping_amt<=15000)
  {
    printf("your shopping amount is=%d\n\n",shopping_amt);
    dis=shopping_amt-2000;
    printf("your discount amount on shopping_amount=%d\n\n",dis);
    gst=dis*10/100;
    printf("your gst on your shopping amount is=%d\n\n",gst);
    total_bill=gst+dis;
    printf("your total bill include gst and discount=%d\n\n",total_bill);
 }
 else
 {
     printf("no any discount on your shopping amount");
 }
}
int main()
{
    int shopping_amount;
    int dis ;
    int gst;
    int total_bill;
    printf("enter your shopping amount");
    scanf("%d",&shopping_amount);
    shopping(shopping_amount);
    return 0;
}