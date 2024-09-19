/*Wap of array take array list from user and
 perfrom cube of each element of given array list
 by using function*/
#include<stdio.h>
int cube(int a[],int size)
{
    
    int cube=0;
    for( int i=0;i<size;i++)
    {
        cube=a[i];
        printf("[%d] cube=[%d]\n",a[i],cube*cube*cube);
    }
}

int main()
{
    int n;
    
    printf("enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter array element\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    cube(arr,n);
}