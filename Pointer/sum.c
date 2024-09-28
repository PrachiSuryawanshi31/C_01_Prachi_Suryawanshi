/*WAP to perfrom the sum and reverse in pointer
by using function
take values from user*/

#include<stdio.h>
#include<conio.h>

int sum_of_no(int ino1,int ino2,int ino3,int ino4,int sum,int n )
{
    int rev;
    int *ptr1=&ino1;
    int *ptr2=&ino2;
    int *ptr3=&ino3;
    int *ptr4=&ino4;
    int *ptr5=&sum;

    *ptr1=n%10;
     n=n/10;

    *ptr2=n%10;
     n=n/10;

    *ptr3=n%10;
     n=n/10;

    *ptr4=n%10;
     n=n/10;

     sum=*ptr1+*ptr2+*ptr3+*ptr4;

     printf("sum=%d\n",sum);

     rev=(*ptr1*1000) + (*ptr2*100) + (*ptr3*10) + (*ptr4*1);
     printf("rev =%d\n",rev);

}

int main()
{
    int ivalue1;
    int ivalue2;
    int ivalue3;
    int ivalue4;
    int n;
    int sum;

    printf("enter the value of n \n");
    scanf("%d",&n);
    sum_of_no(ivalue1,ivalue2,ivalue3,ivalue4,sum,n);

}