/*write a program to print natural number by using while loop
and take values from user*/
#include<stdio.h>
#include<conio.h>
int natural_number(int ino1,int ino2) 
{
    while(ino1<=ino2)
    {
        printf("[%d]\t",ino1);
        ino1++;
    }
}
int main()
{
    int ivalue1;
    int ivalue2;
    
    printf("enter first number");
    scanf("%d",&ivalue1);
    printf("enter last number");
    scanf("%d",&ivalue2);
    return natural_number(ivalue1,ivalue2);

}