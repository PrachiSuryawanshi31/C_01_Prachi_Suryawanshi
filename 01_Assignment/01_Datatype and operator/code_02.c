/*. Create a simple calculator using prompts to take inputs for two
numbers and display the result using different operators.*/

#include<stdio.h>
#include<conio.h>

int calculator(int num1, int num2)
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
    int inumber1;
    int inumber2;

    printf("enter first value \n");
    scanf("%d",&inumber1);

    printf("enter second value \n");
    scanf("%d",&inumber2);


    int  iRet=calculator(inumber1 ,inumber2);
}
