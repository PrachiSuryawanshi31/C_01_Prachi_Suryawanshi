#include<stdio.h>
#include<conio.h>
/*
1 2 3 4 5 6
2 3 4 5 6 7
3 4 5 6 7 8
4 5 6 7 8 9
5 6 7 8 9 10
*/

void display1()
{
    int i,j;
    int n=5;
    int k=5;

    for(i=1;i<=n;i++)
    {
        k++;
        for(j=i;j<=k;j++)
        { 
           
            printf("%d ",j);
           
        }
        printf("\n");
    }
}

void display2()    // this pattern is wrong 
{
    int i,j;
    int n=5;
    int k=5;

    for(i=1;i<=n;i++)
    { 
        k++;
        
        for(j=1;j<=k;j++)
        {
            printf("%d ",j);  
    
        }
         
        printf("\n");
    }
}

int main()
{
    display1();
    printf("-------------------------------\n");
   //display2();
    printf("-------------------------------\n");
}