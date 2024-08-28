/*write a program to check the given angle is right ,acute or obtuse angle
take angle from user*/
#include<stdio.h>
#include<conio.h>
void check_angle(int angle1)
{
    if(angle1==90)
    {
        printf("angle is right");
    }
    else if( angle1<90)
    {
        printf("angle is acute");
    }
     else if( angle1>90)
    {
        printf("angle is obtuse");
    }
}
int main()
{
    int angle ;
    printf("enter angle:");
    scanf("%d",&angle);
    check_angle(angle);
}