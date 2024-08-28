/*WAP to check given number is divisiable by both 3 and 5*/
#include<stdio.h>
#include<conio.h>
void divisiable(int number)
{
    if((number%3)==0 || (number%5)==0)
    {
        printf("number is divisible by 3 and 5");
    }
    else
    {
        printf("number is not divisiable by 3 and 5");
    }
}
int main()
{
    int ino;
    printf("enter value of ino");
    scanf("%d",&ino);
    divisiable(ino);

}