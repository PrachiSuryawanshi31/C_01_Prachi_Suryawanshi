#include<stdio.h>
int odd(int arr[],int size)
{
    int oddcount=0;
    printf("odd number:\n");
    for(int i=0;i<=size;i++)
    {
        if((arr[i]%2)==1)
        {
            printf("%d\n",arr[i]);
            oddcount++;
        }
       
        
    }
     printf("number of odd element =%d\n :",oddcount);
}

int main()
{
    int n;
    printf("enter number which is indecates the array element \n");
    scanf("%d",&n);

    int a[n];
    printf("enter array element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    odd(a,n);
}
