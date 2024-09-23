/*
Write a program of Structure using function to print the information of employee,
take input from user.
*/

#include<stdio.h>
#include<string.h>

struct Employer_info
{
    char name[50];
    int age;
    int salary;
    char edu[20];

};

int display(struct Employer_info e)
{
    printf("\n\n**Employee Information**\n\n");

    printf("Name :%s\n",e.name);
    printf("Education :%s\n",e.edu);
    printf("Age :%d\n",e.age);
    printf("Salary :%d\n",e.salary);
    
    return 0;
}

int main()
{
    struct Employer_info e1;

    printf("Enter Your Name \n");
    scanf("%s",&e1.name);

    printf("Enter Your Age\n");
    scanf("%d",&e1.age);

    printf("Enter Your Salary\n");
    scanf("%d",&e1.salary);

    printf("Enter Your Education\n");
    scanf("%s",&e1.edu);

    display(e1);

    return 0;

}