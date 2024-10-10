/*Write an  function that takes two numbers and returns the
maximum. */

#include<stdio.h>
#include<conio.h>

int MaxNum(int ino1,int ino2)
{
    if(ino1>ino2)
    {
       
        printf("%d is maximum \n",ino1);
    }
    else
    {
         printf("%d is maximum \n",ino2);
    }
}

int main()
{
    int first_number;
    int second_number;

    printf("enter  first number : ");
    scanf("%d",&first_number);

    printf("enter second number:");
    scanf("%d",&second_number);

    MaxNum(first_number,second_number);

}