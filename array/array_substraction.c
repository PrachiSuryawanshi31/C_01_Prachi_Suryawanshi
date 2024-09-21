/*Wap of array take array list from user and
 perfrom substraction of given array list
 by using function*/
#include<stdio.h>
#include<conio.h>

int substraction(int a[],int size)
{
    int sub=0;
    for(int i=0;i<=size;i++)
    {
        printf("[%d]=[%d]\n",i,a[i]);
        sub=sub-a[i];
    }
    printf("subsraction=[%d]",sub);
}
int main()
{
    int n;
    printf("enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter array list\n");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    substraction(arr,n);
    return 0;
}
