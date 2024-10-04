/*Write a program to swap two variables without using a third
variable.*/

#include<stdio.h>
#include<conio.h>

int swapping(int ino1,int ino2)
{
    

    ino1=ino1+ino2;
    ino2=ino1-ino2;
    ino1=ino1-ino2;

    printf("first value after swappinf is = %d \n",ino1);
    printf("second value after swapping is =%d \n",ino2);

}

int main()
{
   int num1,num2;

    printf("enter first number :");
    scanf("%d",&num1);
    printf("enter second number :");
    scanf("%d",&num2);

   // printf("first value before the swapping is =%d\n",num1);
   // printf("Second value before the swapping is =%d\n",num2);


    int iRet=swapping(num1,num2);

    
}