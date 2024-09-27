/*Wap of pointer with array take array list from user and
 perfrom multiplication of given array list in pointer
 by using function*/

#include<stdio.h>
#include<conio.h>

int mult(int a[],int size)
{
    int mult=1; 
    int i; 
    int *ptr[size];

    for(i=0;i<size;i++)
    {
        ptr[i]=&a[i];
        printf("[%d] = [%d]  [%lu]\n",i,*ptr[i],ptr[i]);
        mult=mult* *ptr[i];
    }
    printf("mult=[%d]",mult);
  
}
   int main()
{
    int n;
    printf("enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);
    int arr[n];
     printf("enter array list");
       
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
         
    }
       mult(arr,n);
     
   
}

