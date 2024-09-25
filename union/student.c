 #include<stdio.h>
#include<string.h>

union student
{
    char name[20];
    int age;
    int roll_no;
}s2;

void display()
{
    printf("\n Student detail :\n");

    printf("name:%s \n",s2.name);
    printf("age :%d \n ",s2.age);
    printf("roll number : %d \n",s2.roll_no);
}

int main()
{
   

    printf("enter name:\n");
    scanf("%s",&s2.name);

    printf("enter age :\n");
    scanf("%d",&s2.age);

    printf("enter roll number:\n");
    scanf("%d",&s2.roll_no);

    display();

}
