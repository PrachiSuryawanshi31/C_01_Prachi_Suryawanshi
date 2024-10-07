/*Write a program to print the multiplication table of a number
using a for loop.*/

#include<stdio.h>
#include<conio.h>

int table(int ino)
{
    int icnt;
    printf("table of %d",ino);

    for(icnt=1;icnt<=10;icnt++)
    {
        printf("\n %d ",icnt*ino);
    }
}

int main()
{
    int num;

    printf("enter any number to get table:\n");
    scanf("%d",&num);

    table(num);
}