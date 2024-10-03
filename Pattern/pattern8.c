/* 18,19,20,21,22,23,24,25 */

#include<stdio.h>
#include<conio.h>

/*
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
*/
void display1()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",i%2);
        }
        printf("\n");
    }
}

/*
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0

*/
 void display2()
 {
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",i%2);
        }
        printf("\n");
    }
 }

/*
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
*/
void display3()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }
}
/*
0 1 0 1 0
0 1 0 1 0
0 1 0 1 0
0 1 0 1 0
0 1 0 1 0*/

void display4()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }
}
/*
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
*/
void display5()
{ 
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }
}
/*
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1*/
void display6()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }
}
/*
1 0 1 0 1
0 0 0 0 0
1 0 1 0 1
0 0 0 0 0
1 0 1 0 1*/

void display7()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",(i*j)%2);
        }
        printf("\n");
    }
}
/*
0 1 0 1 0
0 0 0 0 0
0 1 0 1 0
0 0 0 0 0
0 1 0 1 0*/

void display8()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<5;j++)
        {
        printf("%d ",(i*j)%2);
        }
        printf("\n");
    }
}
int main()
{
    display1();
    printf("--------------------------------------------\n");
    display2();
    printf("--------------------------------------------\n");
    display3();
    printf("--------------------------------------------\n");
    display4();
    printf("--------------------------------------------\n");
    display5();
    printf("--------------------------------------------\n");
    display6();
    printf("--------------------------------------------\n");
    display7();
    printf("--------------------------------------------\n");
    display8();
    printf("--------------------------------------------\n");
}