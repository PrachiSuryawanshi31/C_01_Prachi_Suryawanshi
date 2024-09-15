/*WAP to print square from 20 to 50 by using do while loop.
take input from user*/
#include<stdio.h>
#include<conio.h>
void square(int ino1,int ino2)
{
    do
    {
        printf("[%d]\t",ino1*ino1);
        ino1++;
    } 
    while (ino1<=ino2);
    
}
int main()
{
    int ivalue1;
    int ivalue2;
    printf("enter first value");
    scanf("%d",&ivalue1);
    printf("enter last value ");
    scanf("%d",&ivalue2);
    square(ivalue1,ivalue2);
}