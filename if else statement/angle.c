/*WAP to chechk given angle is acute angle or obtuse angle*/

#include<stdio.h>
#include<conio.h>
void check_angle(int angle)
{
    if(angle>90)
    {
        printf("angle is obtuse...");
    }
    else
    {
        printf("angle is acute..");
    }
}
int main()
{
    int a;
    printf("enter angle ");
    scanf("%d",&a);
    check_angle(a);
}