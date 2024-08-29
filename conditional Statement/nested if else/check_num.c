/*WAP of number is greater or smaller by using nested if else statement*/

#include<stdio.h>
#include<conio.h>
void check_number(int ino)
{
    if(ino<100)
    {
        if(ino>50)
        {
            printf("ino is greater than 50");
        }
        else
        {
            printf("ino is less than 50");
        }
    }
    else
    {
        if(ino>100)
        {
            printf("ino is greater than 100");
        }
        else
        {
            printf("ino is smaller than 100");

        }

    }

}
int main()
{
    int ino1;
    printf("enter value for ino...");
    scanf("%d",&ino1);
    check_number(ino1);
    return 0;
}