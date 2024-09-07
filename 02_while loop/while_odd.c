/*write a program while loop to print odd number take values from use and
 find ot the odd number by using function*/
#include<stdio.h>
#include<conio.h>
void check_odd(int ino1,int ino2)
{
    while(ino1>=ino2)
    {
        if(ino1%2==1)
        {
        printf("[%d]\t",ino1);
        }
        ino1--;
    }
}
int main()
{
    int ivalue1;
    int ivalue2;
    printf("enter  first number");
    scanf("%d",&ivalue1);
    printf("enter last number");
    scanf("%d",&ivalue2);
    check_odd(ivalue1,ivalue2);
}