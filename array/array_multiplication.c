/*Wap of array take array list from user and
 perfrom multiplition of given array list
 by using function*/

#include<stdio.h>
#include<conio.h>
int multiply(int a[],int size)
{
    int mult=1;
    for(int i=0;i<=size;i++)
    {
        printf("[%d]=[%d]\n",i,a[i]);
        mult=mult*a[i];
    }
    printf("multiplication=[%d]",mult);
}
int main()
{
    int n;
    printf("enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter array element");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
     return  multiply(arr,n);
    
}