/*WAP to print all reverse cube by using do while loop 
take input from user*/
#include<stdio.h>
#include<conio.h>
int cube(int ino1,int ino2)
{
    do
    {
        printf("[%d]\t",ino1*ino1);
        ino1--;
    }
     while (ino1>=ino2);
    
}
int main()
{
    int ivalue1;
    int ivalue2;
    printf("enter first number");
    scanf("%d",&ivalue1);
    printf("enter last number");
    scanf("%d",&ivalue2);
    cube(ivalue1,ivalue2);
}