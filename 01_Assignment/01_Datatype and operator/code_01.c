/* Create a program that takes two numbers as input and
performs addition, subtraction, multiplication, and division*/


#include<stdio.h>
#include<conio.h>

int arithmatic(int num1, int num2)
{
    int iAns;

    iAns=num1+num2;
    printf("Addition=%d \n",iAns);

    iAns=num1-num2;
    printf("Substraction=%d \n",iAns);

    iAns=num1*num2;
    printf("Multiplition=%d \n",iAns);

    iAns=num1/num2;
    printf("Division=%d \n",iAns);

    iAns=num1% num2;
    printf("Mode=%d \n",iAns);


}

int main()
{
    int ino1;
    int ino2;
    int ians;

    printf("enter a value for first number is =");
    scanf("%d",&ino1);

    printf("enter a value for second  is =");
    scanf("%d",&ino2);

    printf("\n \n");

    int iret=arithmatic(ino1,ino2);

}