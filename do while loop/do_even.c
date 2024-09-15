/*WAP to print even number take input from user 
by using do while loop*/
#include<stdio.h>
#include<conio.h>
void even(int ino1,int ino2)
{
   do
    {
         if(ino1%2==0)
        {
            printf("[%d]\t",ino1);
        }
        ino1++;
    }
    while(ino1<=ino2);
}
int main()
{
    int ivalue1;
    int ivalue2;
    printf("enter first number ");
    scanf("%d",&ivalue1);
    printf("enter last number");
    scanf("%d",&ivalue2);
    even(ivalue1,ivalue2);
}