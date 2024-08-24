/*WAP to check result of student .student is pass or fail*/
#include<stdio.h>
#include<conio.h>
void result(int persentage)
{
    if(persentage>=35)
    {
        printf("you are pass");
    }
    else
    {
        printf("you are fail");
    }
}
int main()
{
    int persentage1;
    printf("enter your persentage");
    scanf("%d",&persentage1);
    result(persentage1);
}