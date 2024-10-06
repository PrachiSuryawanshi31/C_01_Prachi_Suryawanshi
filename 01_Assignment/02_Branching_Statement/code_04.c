/* Create a program that take  their age from the user and
checks if they are eligible to vote (age >= 18).*/

#include<stdio.h>
#include<conio.h>

int check_age(int age)
{
    if(age>=18)
    {
        printf("%d is eligible to vote\n",age);
    }
    else 
    {
        printf("%d is  not eligible to vote\n",age);
    }
    
}

int main()
{
    int age;

    printf("enter your age\n");
    scanf("%d",&age);

    check_age(age);
}
