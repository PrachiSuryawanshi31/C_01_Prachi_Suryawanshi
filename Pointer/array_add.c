#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int sum=0;
    int arr[] = {1, 2, 3, 4, 5};
int *p[i];  // p points to the first element of arr
for (i = 0; i < 5; ++i)
 {
    p[i]=&arr[i];
    sum=arr[i]+*p[i];  
    printf("%d ", *(p + i));  // Access array elements via pointer
    printf("%d ", sum);
}

}