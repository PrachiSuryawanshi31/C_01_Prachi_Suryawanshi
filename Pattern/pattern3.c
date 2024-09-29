#include<stdio.h>
#include<conio.h>

/*
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25
*/
void display1()
{
    int i,j;
    int k=1;
    for(i=1;i<=5;i++)
    {
        k=i;
        for(j=1;j<=5;j++)
        {
            printf("%d ",k);
            k=k+5;
        }
        printf("\n");
    }
}
/*
2. 1   10   11   20   21
   2   9    12   19   22
   3   8    13   18   23
   4   7    14   17   24
   5   6    15   16   25
   */

  void display2()
{
    int i,j;
    int x,y;
    int n=5;

    for(i=1;i<=n;i++)
    {
        x=i;
        y=n-i+1;

        for(j=1;j<=n;j++)
        {
            if(j%2==1)
            {
                printf(" %d  ",x);
            }

            else
            {
                printf  (" %d  ",y);
            }

            x=x+n;
            y=y+n;
        }

        printf("\n");               
    }
}
/*
 5  10  15  20  25
 4   9  14  19  24
 3   8  13  18  23
 2   7  12  17  22
 1   6  11  16  21*/
void display3()
{
    int i,j,x;
    int n=5;

    for(i=n;i>=1;i--)
    {
        x=i;

        for(j=1;j<=n;j++)
        {
            printf("%d  ",x);
            x=x+n;
        }

        printf("\n");
    }
}
/*
5  6  15 16  25
 4  7  14 17  24
 3  8  13 18  23
 2  9  12 19  22
 1 10  11 20  21*/

void display4()
{
    int i,j;
    int x,y;
    int n=5;

    for(i=1;i<=n;i++)
    {
        x=i;
        y=n-i+1;

        for(j=1;j<=n;j++)
        {
            if(j%2==0)
            {
                printf("%d  ",x);
            }

            else
            {
                printf("%d ",y);
            }

            x=x+n;
            y=y+n;
        }

        printf("\n");
    }
}


int main()
{
  display1();
  printf("----------------------------------\n");
  display2();
  printf("----------------------------------\n");
  display3();
  printf("----------------------------------\n");
  display4();
  printf("----------------------------------\n");
}
