#include<stdio.h>
#include<conio.h>

void display1()
{
    int i,j;

    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
}

void display2()
{
    int i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}

void display3()
{
    int i,j;
    for(i='E';i>='A';i--)
    {
        for(j='E';j>='A';j--)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
}

void display4()
{
    int i,j;
    for(i='E';i>='A';i--)
    {
        for(j='E';j>='A';j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}

void display5()
{
 int i,j;
 int k='A';

 for(i=1;i<=5;i++)
 {
    for(j=1;j<=5;j++)
    {
        printf("%c ",k);
        k++;
    }
    printf("\n");
 }
}
int main()
{
    display1();
    printf("------------------------------------\n");
    display2();
    printf("------------------------------------\n");
    display3();
    printf("------------------------------------\n");
    display4();
    printf("------------------------------------\n");
    display5();
    printf("------------------------------------\n");
}