/*write a program of factorial of that number which is given by user 
by using function */

#include<stdio.h>
#include<conio.h>
int fact(int ivalue)
{
    int fact=1;
    int i;

    for(i=1;i<=ivalue;i++)
    {
        fact=fact*i;
    }
    printf("your fact=%d",fact);
}

int main()
{
    int ino;

    printf("enter value of ino\n");
    scanf("%d",&ino);

    fact(ino);
}