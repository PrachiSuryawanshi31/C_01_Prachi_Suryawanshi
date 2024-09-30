#include<stdio.h>
#include<conio.h>
/*
*
**
***
****
*****
*/

void display1()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5 */

void display2()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
 /*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
  */
void display3()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}
/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/
void display4()
{
    int i,j;
     for(i=5;i>=1;i--)
     {
        for(j=5;j>=i;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
     }
 }    
/*

*/
     void display5()
     {
        int i,j;
        for(i=5;i>=1;i--)
        {
            for(j=5;j>=i;j--)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
     }


     void display6()
     {
        int i,j;
        for(i=5;i>=1;i--)
        {
            for(j=i;j<=5;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
     }

int main()
{
    display1();
    printf("---------------------------\n");
    display2();
    printf("---------------------------\n");
    display3();
    printf("---------------------------\n");
    display4();
    printf("---------------------------\n");
    display5();
    printf("---------------------------\n");
    display6();
    printf("---------------------------\n");
}