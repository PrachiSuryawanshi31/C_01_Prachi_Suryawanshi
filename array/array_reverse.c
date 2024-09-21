/* Write a program of array take array list from user
and reverse the array list by using function  */
#include <stdio.h>
int reverse_array(int arr[],int size)
{
    int array[size];
    for(int i=0;i<size;i++)
    {
        array[i]=arr[size-i-1];
    }
    printf("Reversed array:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\n",array[i]);
    }
}
int main()
{
    int n;
    printf("enter how many array element you want \n");
    scanf("%d",&n);

    int a[n];
    printf("enter array list");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     return reverse_array(a,n);
}

