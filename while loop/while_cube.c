/*write a program while loop to print cube take values from use and
 find ot the cube by using function*/
#include<stdio.h>
#include<conio.h>
void cube(int ino1,int ino2)
{
    while(ino1<=ino2)
    {
        printf("[%d]\t",ino1*ino1*ino1);
        ino1++;
    }
}
int main()
{
    int ivalue1;
    int ivalue2;
    printf("enter first number");
    scanf("%d",&ivalue1);
    printf("enter last number");
    scanf("%d",&ivalue2);
    cube(ivalue1,ivalue2);
}