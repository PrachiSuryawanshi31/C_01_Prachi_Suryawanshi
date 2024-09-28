/*WAP to perfrom the swapping of two and three variable in pointer
by using function*/

#include<stdio.h>
#include<conio.h>

int swap( int ino1,int ino2)
{
    
   int *ptr1=&ino1;
   int *ptr2=&ino2;
  

   printf("\n\t Swapping with two variable\t\n");

   *ptr1=*ptr1+*ptr2;
   *ptr2=*ptr1-*ptr2;
   *ptr1=*ptr1-*ptr2;
   

   printf("swapping of ino1=%d\n",ino1);
   printf("swapping of ino2=%d\n",ino2);
}
int swap3(int ino1,int ino2)
{
     int ino3;
   int *ptr1=&ino1;
   int *ptr2=&ino2;
   int *ptr3=&ino3;

   printf("\n\t Swapping with three variable\t\n");
   
   *ptr3=*ptr1;
   *ptr1=*ptr2;
   *ptr2=*ptr3;

   printf("swapping of ino1=%d\n",ino1);
   printf("swapping of ino2=%d\n",ino2);


}
int main()
{
    int ivalue1;
    int ivalue2;
    int ivalue3;

    printf("enter the value of ino1 \n");
    scanf("%d",&ivalue1);

    printf("enter the value of ino2 \n");
    scanf("%d",&ivalue2);

    int iret=swap(ivalue1,ivalue2);
    swap3(ivalue1,ivalue2);
}