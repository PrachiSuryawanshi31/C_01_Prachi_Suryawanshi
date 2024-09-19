/*Wap of array take array list from user and
 perfrom division of given array list
 by using function*/
#include<stdio.h>
#include<conio.h>
int division(int a[],int size)
{
    float div=1;
    for(int i=0;i<=size;i++)
    {
        printf("[%d]=[%d]\n",i,a[i]);
        div=div/a[i];
    }
    printf("division=[%f]",div);
}
int main()
{
    int n;
    printf("enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter array element");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    division(arr,n);
    return 0;
}
