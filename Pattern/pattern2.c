#include<stdio.h>
#include<conio.h>

/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
void display1()
{
    int i,j;
    int k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}
/*
1 3 5 7 9
11 13 15 17 19
21 23 25 27 29
31 33 35 37 39
41 43 45 47 49
*/
void display2()
{
    int i,j;
    int k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",k);
            k=k+2;
        }
        printf("\n");
    }
}
/*
2 4 6 8 10
12 14 16 18 20
22 24 26 28 30
32 34 36 38 40
42 44 46 48 50
*/

void display3()
{
    int i,j;
    int k=2;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",k);
            k=k+2;
        }
        printf("\n");
    }
}
/*
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
*/
void display4()
{
    int i,j;
    int k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",j*i);

        }
        printf("\n");
    }
}
/*
11 21 31
12 22 32
13 23 33
*/
void display5()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d%d ",j,i);
        }
        printf("\n");
    }
}
/*
11 12 13
21 22 23
31 32 33
*/
void display6()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d%d ",i,j);
        }
        printf("\n");
    }
}


int main()
{
  display1();
  printf("-----------------------------------\n");
  display2();
  printf("-----------------------------------\n");
  display3();
  printf("-----------------------------------\n");
  display4();
  printf("-----------------------------------\n");
  display5();
  printf("-----------------------------------\n");
  display6();
  printf("-----------------------------------\n");
  
  

}