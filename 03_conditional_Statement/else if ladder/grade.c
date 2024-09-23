/*write a program of grade of student  as per mark by using if else ladder
*/ 
#include<stdio.h>
#include<conio.h>
void grade(int mark)
{
    if(mark>90)
    {
        printf("you have A1 grade");
    }
    else if(mark>80 && mark<=90)
    {
        printf("you have A2 Grade");
    }
     else if(mark>60 && mark<=80)
    {
        printf("you have  B1 Grade");
    }
    else if(mark>50 && mark<=60)
    {
        printf("you have  C Grade");
    }
     else if(mark>35 && mark<=50)
    {
        printf("you   are pass");
    }
    else if(mark<=35)
    {
        printf("you are fail");
    }
    else
    {
        printf("kuch nhi hai tu padhahi krr lee...");
    }
}
int main()
{
    int marks;
    printf("enter your mark");
    scanf("%d",&marks);
    grade(marks);
    }