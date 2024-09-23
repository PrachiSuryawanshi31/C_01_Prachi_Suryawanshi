/*Write a program to check given number is positive or negative or zero
by using if else ladder .by using if else ladder */

#include<stdio.h>
#include<conio.h>
void check_number(int ivalue)
{
    if(ivalue>0)
    {
      printf("number is positive");
    }
    else if(ivalue<0)
    {
        printf("number is negative");
    }
    else if(ivalue==0)
    {
        printf("number is zero");
    }
    
}
int main()
{
    int ino;
    printf("enter value for ino ");
    scanf("%d",&ino);
    check_number(ino);
}