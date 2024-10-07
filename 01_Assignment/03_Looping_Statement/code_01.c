/*  Write a program to print the first 10 natural numbers using a
for loop*/

#include<stdio.h>
#include<conio.h>
int NaturalNumber(int ino1,int ino2)
{
    int icnt;
    for(icnt=ino1; icnt<=ino2;icnt++)
    {
        printf("%d \t",icnt);
    }
}

int main()
{
    int first_no;
    int last_no;

    printf("Enter first number:\n");
    scanf("%d",&first_no);

    printf("Enter last number:\n");
    scanf("%d",&last_no);

    printf("Natural Number:\n");

    NaturalNumber(first_no,last_no);
}