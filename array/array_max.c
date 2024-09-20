/*Wap of array take array list from user and 
find out the maximum number from the array list
by usig function*/

#include<stdio.h>
int maximum_num(int a[],int size)
{
    int i;
    int max=a[0];
    for( i=0;i<size;i++)
    {
        printf("[%d]=[%d]\n",i,a[i]);
     if(a[i]>max)
     {
        max=a[i];
     }
    }
    printf("maximum element in given array is[%d]",max);
    return 0;
}
int main()
{
    int n;
    printf("enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter array element");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    maximum_num(arr,n);
    return 0;
}