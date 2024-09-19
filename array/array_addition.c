/*Wap of array take array list from user and
 perfrom addition of given array list
 by using function*/

#include<stdio.h>
#include<conio.h>
int add(int a[],int size)
{
    int sum=0;  
    for(int i=0;i<=size;i++)
    {
        printf("[%d] = [%d]\n",i,a[i]);
        sum=sum+a[i];
    }
    printf("sum=[%d]",sum);
  
}
   int main()
{
    int n;
    printf("enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);
    int arr[n];
     printf("enter array list");
       
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
         
    }
     add(arr,n);
     return 0;
   
}

