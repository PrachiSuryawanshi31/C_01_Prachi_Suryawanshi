/*WAP to print table which number is enter by user by using do while loop*/
#include<stdio.h>
#include<conio.h>
void table(int ino2)
{ 
    int ino1=1;
    do
    {
      printf("[%d]\n",ino1*ino2);
      ino1++;
    } 
    while (ino1<=10);
    
}
int main()
{
    int ivalue;
    printf("enter number which you have that table");
    scanf("%d",&ivalue);
    table(ivalue);
}