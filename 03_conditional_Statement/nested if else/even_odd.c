/*WAP Of check number is even or odd */
#include<stdio.h>
#include<conio.h>
void check_num(int ivalue)
{
    if(ivalue<=100 && ivalue>=1)
    {
        if(ivalue %2==0)
        {
            printf("this is even number");
        }
        else
        {
            printf("this is odd number");
        }
    }
    else
    {
        if((ivalue%2)!=0)
        {
            printf(" number is odd");
        }
        else
        {
            printf(" number is even");
        }

    }
}
int main()
{
    int ino;
    printf("enter value for ino");
    scanf("%d",&ino);
    check_num(ino);
    return 0;
}