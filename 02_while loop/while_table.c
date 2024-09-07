/*WAP to print table which number is enter from user by using while loop*/

#include<stdio.h>
#include<conio.h>
void table(int ino2)
{
    int ino1=1;
    while(ino1<=10)
    {
        printf("[%d]\t",ino1*ino2);
        ino1++;
    }
}
int main()
{
    int ivalue1;
    printf("enter value for ivalue1");
    scanf("%d",&ivalue1);
    
    table(ivalue1);
}