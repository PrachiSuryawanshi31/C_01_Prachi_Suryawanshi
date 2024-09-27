/*Wap of pointer with array take array list from user and
 find the maximum number from the given array list  with his addrese in pointer 
 by using function*/     

#include<stdio.h>
#include<conio.h>

int max_num(int arr[],int size)
{
    int *ptr[size];
    int i;
    int max=arr[0];

    for(i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
 
         if(arr[i]>max)
       {
        max=arr[i];
       }

       printf("%d  %d  %lu \n",i,arr[i],ptr[i]);

    } 
    printf("%lu is max number=%d \n",ptr[i]);
}

int main()
{
    int n;
    printf("enter number to indicate the how many number passed in array\n");
    scanf("%d",&n);

    int array[n];

    printf("enter array element\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    max_num(array,n);
}