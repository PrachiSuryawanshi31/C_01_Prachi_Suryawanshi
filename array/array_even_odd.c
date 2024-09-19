
#include <stdio.h>

int Even(int arr[], int size)
 {
    int i;
    int evenCount=0;
    int oddCount=0;

    printf("\nEven Number:\n");

    for(i=0;i<size;i++)
     {
        if(arr[i]%2==0) 
        {
            printf("%d\n",arr[i]);
            evenCount++;
        }
    }

     printf("Number of Even Elements: %d\n", evenCount);

    printf("\nOdd Number:\n");

    for(i= 0;i<size;i++)
     {
        if (arr[i]%2==1) 
        {
            printf("%d\n",arr[i]);
            oddCount++;
        }
    }

     printf("Number of Odd Elements: %d\n", oddCount);
}

int main() 
{
    int n;

    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);

    int a[n];
    int i;

    printf("Enter array elements:\n");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }

    Even(a,n); 

    return 0;
}
