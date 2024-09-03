/*WAP of switch statement 
to find the maximum number between two number
 by using function*/
#include<stdio.h>
#include<conio.h>
int check_number(int ino1,int ino2)
{
    switch(ino1>ino2)  /*in switch this expression is 
                        consider as a boolean datatype
                        so in that case 1: is true and 
                        case 0 is false*/

    {
        case 1:                              //true
        printf("%d is greater than %d",ino1,ino2);
        break;

        case 0:
        switch(ino2>ino1)
        {
            case 1:                             //true 
            printf(" %d  is grater than %d ",ino2,ino1);
            break;

            case 0:                              //false
            printf("%d is equal to %d",ino1,ino2);
            break;
        }
    }
}
int main()
{
    int num1;
    int num2;
    printf("enter value of number");
    scanf("%d",&num1);
    printf("enter value of number");
    scanf("%d",&num2);
    return check_number(num1 ,num2);
}