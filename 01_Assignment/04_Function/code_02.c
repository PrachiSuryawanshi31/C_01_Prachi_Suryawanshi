/*Write a function that checks whether a given number is prime or not.*/

#include<stdio.h>
#include<conio.h>

int Prime_no(int num)
{
    int icnt;
    int icount=0;

    for(icnt=1;icnt<=num;icnt++)
    {
        if(num %icnt==0)
        {
            icount++;
        }
    }

    if(icount==2)
    {
        printf(" This is prime number");
    }
    else
    {
        printf(" This is not prime number ");
    }
}


int main()
{
    int ino;
    printf("enter number :");
    scanf("%d",&ino);

    Prime_no(ino);
}