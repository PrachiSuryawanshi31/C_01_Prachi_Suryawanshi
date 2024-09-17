/*WAP to print all reverse cube  take both number to print the cube 
by using for loop.*/
#include<stdio.h>
#include<conio.h>
int cube(int ino1 ,int ino2)
{
    for(int icnt=ino1; icnt<=ino2; icnt++)
    {
        printf("[%d]\t",icnt*icnt*icnt);
    }
}
int main()
{
    int a;
    int b;
    printf("enter first value to print cube");
    scanf("%d",&a);
    printf("enter last number to print cube");
    scanf("%d",&b);
    cube(a,b);
}