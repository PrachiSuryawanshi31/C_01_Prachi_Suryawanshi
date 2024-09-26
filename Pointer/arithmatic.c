/*WAP to perfrom the arithmatic operation in pointer
by using function
take value from user*/


#include<stdio.h>
#include<conio.h>

int arithmatic(int ivalue1,int ivalue2)
{
    int *ptr1=& ivalue1;
    int *ptr2=& ivalue2;
    int icount;

    printf("value of ivalue1 is %d\n",ivalue1);
    printf("value of ivalue2 is %d\n",ivalue2);
    printf("value of ptr1 is %lu\n",ptr1);
    printf("value of ptr2 is %lu\n",ptr2);

    printf("\n\t******addition*****\t\n");

    icount=*ptr1+*ptr2;
    printf("addition =%d",icount);
    printf("\n\n");
    printf("----------------------------------------");

    printf("\n\t******substraction*****\t\n");
    
    icount=*ptr1-*ptr2;
    printf("substraction =%d",icount);
    printf("\n\n");
    printf("----------------------------------------");

    printf("\n\t******multiplication*****\t\n");

    icount=*ptr1* *ptr2;
    printf("multiplication=%d",icount);
    printf("\n\n");
    printf("----------------------------------------");

    printf("\n\t******division*****\t\n");

    icount=*ptr1/ *ptr2;
    printf("division =%d",icount);
    printf("\n\n");
    printf("----------------------------------------");

    printf("\n\t******mode*****\t\n");

    icount=*ptr1%*ptr2;
    printf("mode =%d",icount);
    printf("\n\n");
    printf("----------------------------------------");

    
}

int main()
{
    int ino1;
    int ino2;

    printf("enter value for ino1\n");
    scanf("%d",&ino1);

    printf("enter value for ino2\n");
    scanf("%d",&ino2);

    int iret=arithmatic(ino1,ino2);

    
}