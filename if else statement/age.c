/* write a program to check given age is applicable or not for votting by 
using if else statement */

#include<stdio.h>
#include<conio.h>
void age(int age)
{
    if(age>18)
    {
         printf("age is applicable for votting..");
    }
    else
    {
         printf("age is not applicable for votting...");
    }
}
int main()
{
    printf("age is APPLICABLE or not....\n");
    int a;
    printf("enter your current age\n");
    scanf("%d",&a);
    age(a);
   
}