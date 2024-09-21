/*Wap of array take array list from user and
 perfrom square of each element of given array list
 by using function*/
#include<stdio.h>
void square(int a[],int size)
{
    int i;
    int square=0;
    for(i=0;i<size;i++)
    {
        //printf("[%d]=[%d]\n",i,a[i]);
        square=a[i];
        printf("[%d] square =[%d]\n",a[i],square*square);
    }
    
}
 int main()
{
    int n;
    printf("enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter array list\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    square(arr,n);
}
