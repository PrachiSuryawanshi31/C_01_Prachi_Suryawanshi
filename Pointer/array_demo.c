/*Wap of pointer with array take array list from user and
 demostrate the of given array list  with his addrese in pointer 
 by using function*/

#include<stdio.h>
#include<conio.h>

int number(int arr[],int size)
{ 
    int *ptr[size];

    for(int i=0;i<size;i++)
    {
        ptr[i]=&arr[i];

       printf("%d   %d  %lu \n",i,arr[i],ptr[i]);
    }
}

int main()
{
    int n;
    printf("enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);

    int array[n];
    int i;

    printf("enter array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    number(array,n);
}

