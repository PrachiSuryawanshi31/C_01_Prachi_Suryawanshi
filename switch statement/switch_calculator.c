/*Wap of switch to perfrom calculator.
 by using function*/
#include<stdio.h>
#include<conio.h>
int calculator(char opr,int ivalue1, int ivalue2)
{
    int ivalue3;
    switch(opr)
    {
        case '+':
        ivalue3=ivalue1+ivalue2;
        printf("Addition =[%d]\n\n",ivalue3);
        break;

        case '-':
        ivalue3=ivalue1-ivalue2;
        printf("Substraction =[%d]\n\n",ivalue3);
        break;

        case '*':
        ivalue3=ivalue1*ivalue2;
        printf("Multipiction =[%d]\n\n",ivalue3);
        break;

        case '/':
        ivalue3=ivalue1/ivalue2;
        printf("Division =[%d]\n\n",ivalue3);
        break;

    }
}
int main()
{
    char operator;
    int ino1;
    int ino2;
    
     printf("which operation do you want to perform\n");
    scanf("%c",&operator);
    printf("enter value for ino1\n");
    scanf("%d",&ino1);
    printf("enter value for ino1\n");
    scanf("%d",&ino2);
   
    return calculator(operator,ino1,ino2);
    

}