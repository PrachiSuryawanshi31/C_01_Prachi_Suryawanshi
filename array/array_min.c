/*Wap of array take array list from user and 
find out the minimum number from the array list
by usig function*/

#include<stdio.h>
void minimum_num(int a[],int size)
{
    int i;
    int min=a[0];
    for( i=0;i<size;i++)
    {
        printf("[%d]=[%d]\n",i,a[i]);
     if(a[i]<min)
     {
        min=a[i];
     }
    }
    printf("minimum element in given array is[%d]",min);
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
    minimum_num(arr,n);
    return 0;
}