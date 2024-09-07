/*write a program while loop to print even number take values from use and
 find ot the even number by using function*/
#include<stdio.h>
#include<conio.h>
void check_even(int a,int b)
{
   while(a<=b)
   {
    if(a%2==0)
    {
    printf("[%d]\t",a);
    }
    a++;
   }
}

int main()
{
    int ino1;
    int ino2;
    printf("enter value for ino1");
    scanf("%d",&ino1);
    printf("enter value for ino2");
    scanf("%d",&ino2);
    check_even(ino1,ino2);
    return 0;
}