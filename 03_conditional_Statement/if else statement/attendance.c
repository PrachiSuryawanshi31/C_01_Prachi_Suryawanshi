/*WAP  of attendance .attendance is greater than 75% 
then student is valid for exam otherwise not */
#include<stdio.h>
#include<conio.h>
void attendance(int presenty)
{
    if(presenty>=75)
    {
     printf("you are valid for exam");
    }
    else
    {
        printf("you are not valid for exam");
    }
}
int main()
{
    int attendance1;
    printf("enter your attendance=");
    scanf("%d",&attendance1);
    attendance(attendance1);

    return 0;
}