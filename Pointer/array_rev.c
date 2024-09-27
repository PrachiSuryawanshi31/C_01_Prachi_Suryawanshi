/*Wap of pointer with array take array list from user and
 reverse the array element from the given array list  with his addrese in pointer 
 by using function*/

#include<stdio.h>
#include<conio.h>

int reverse(int arr[],int size)
{
    int *ptr[size];
    int i;

    for(i=size;i>0;i--)
    {
        ptr[i]=&arr[i];

        printf("%d   %d   %lu\n\n",i, arr[i], ptr[i]);
    }
      printf(" reverse element\n");
    for(i=size;i>0;i--)
    {
        printf("%d \t",arr[i]);
    }
}

int main()
{
    int n;
    printf("enter number which is indecates the how many number you passed in array list\n");
    scanf("%d",&n);
    int array[n];
    int i;

    printf("enter array element \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    reverse(array,n);
}