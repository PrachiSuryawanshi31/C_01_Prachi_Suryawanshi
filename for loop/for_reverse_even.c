/*WAP of for loop to print all even number between 100 to 200 .
this values take from user (this program write in functio)*/

#include<stdio.h>
#include<conio.h>
void even(int ino1,int ino2)
{
    int icnt;
    for( icnt=ino1;icnt>=ino2;icnt--)
    {
        if( icnt%2==0)
        {
         printf("[%d]\t",icnt);
        }
    }
}
int main()
{
    int ivalue1;
    int ivalue2;
    printf("enter first number:");
    scanf("%d",&ivalue1);
    printf("enter last number:");
    scanf("%d",&ivalue2);
    even(ivalue1,ivalue2);
}