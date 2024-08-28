/*WAP of calculator.by using if else ladder.c*/
#include<stdio.h>
#include<conio.h>
void calculator(char opr,int ivalue1,int ivalue2,int ivalue3)
{
 if(opr=='+')
 {
    ivalue3=ivalue1+ivalue2;
    printf("Addition=%d",ivalue3);
 }
 else if(opr=='-')
 {
    ivalue3=ivalue1-ivalue2;
    printf("Substraction=%d",ivalue3);
 }
 else if(opr=='*')
 {
    ivalue3=ivalue1*ivalue2;
    printf("multiplition=%d",ivalue3);
 }
 else if(opr=='/')
 {
    ivalue3=ivalue1/ivalue2;
    printf("division=%d",ivalue3);
 }
 else if(opr=='%')
 {
    ivalue3=ivalue1%ivalue2;
    printf("mode=%d",ivalue3);
 }
}
int main()
{
    int ino1;
    int ino2;
    int ino3;
    char opertor;
    printf("which operation do you perform");
    scanf("%c",&opertor);
    printf("enter value for ino1:");
    scanf("%d",&ino1);
    printf("enter value for ino2:");
    scanf("%d",&ino2);
    
    calculator(opertor,ino1,ino2,ino3);
    return 0;
}