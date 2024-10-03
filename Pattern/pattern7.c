/* 40 to 46 */
#include<stdio.h>
#include<conio.h>

/*
2
2 4
2 4 6
2 4 6 8
2 4 6 8 10*/
void display1()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j*2);
        }
        printf("\n");
    }
}
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

void display2()
{
    int i,j;
    int k=1;
    for(i=1;i<=5;i++)
    { 
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
              k++;
        }
      
        printf("\n");
    }
}
/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/

void display3()
{
    int i,j;
    int n;
    int k=1;
    for(i=1;i<=5;i++)
    { 
        for(j=1;j<=i;j++)
        {
            printf("%d ",(i+j-1));
           
        }
        
        printf("\n");
    }
}
/*
1
3 5
5 7 9
7 9 11 13
9 11 13 15 17
*/

void display4()
{
    int i,j;
    int k;
    for(i=1;i<=5;i++)
    {
        k=i-1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k+i);
            k=k+2;
        }
        printf("\n");
    }
}
/*
1
3  5
7  9  11
13  15  17  19
21  23  25  27  29
*/

void display5()
{
    int i,j;
    int k=1;
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            
            printf("%d  ",k);
            k=k+2;
            
        }
        printf("\n");
    }
}

void display6()
{
    int i,j;
    int k=2;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k=k+2;
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
    display6();
    printf("------------------------------------\n");
    
     
}