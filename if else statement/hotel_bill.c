/*WAP of hotel bill. when you order greater than 2 sabjii and greater than 20 rotii ad greated than 1 rice plate then you have 500 rs discount
otherwise no any discount on your order and find out total bill of hotel */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void hotel(int sabjii,int rice,int roti)
{
    int sabji_price=200;
    int rice_price=150;
    int roti_price=20;

    if(sabjii>2 && rice>1 && roti >15)
    {
      printf("you got 500 rs discount on you bill....\n\n");
      int total_bill=(sabjii *sabji_price)+
                       (rice * rice_price)+
                       (roti *roti_price);
        
        printf("total bill =[%d]\n\n",total_bill);
        int total_bill_dis= total_bill -500;
        printf("total bill include discount=[%d]\n\n",total_bill_dis);

        printf("Thank youu for visit....\n\n");
    }
    else
    {

        int total_bill=(sabjii *sabji_price)+
                       (rice * rice_price)+
                       (roti *roti_price);
        
        printf("total bill =[%d]\n\n",total_bill);
        
        printf("Thank youu for visit....\n\n");
    }

}
int main()
{
    printf("**********SHREE KRISHNA HOTEL ,LATUR*************\n\n");
    printf("-------------------------------------------------------------------------\n\n");
    printf("**************welcome to our Shree Krishna Hotel****************\n\n");
   /* String name;
    printf("enter ypur customer name...\n\n");
    scanf("%s",&name);
    printf("name:\n",name);
    */

    printf("*******************************************\n\n");
    int sabjii1;
    printf("enter how many sabjii you order...\n\n");
    scanf("%d",&sabjii1);
    int rice1;
    printf("enter how many plate rice you order...\n\n");
    scanf("%d",&rice1);
    int rotii1;
    printf("enter how many rotii you order...\n\n");
    scanf("%d",&rotii1);

    hotel(sabjii1,rice1,rotii1);


    return 0;
}