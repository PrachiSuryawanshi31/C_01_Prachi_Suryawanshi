/*Create a program that prints all even numbers between 1 and
50 using a for loop.*/

#include<stdio.h>
#include<conio.h>

int EvenNumber(int ino1,int ino2)
{
    printf("Even Number:\n");


    int icnt;
    for(icnt=ino1;icnt<=ino2;icnt++)
    {
        if(icnt % 2==0)
        {
            printf("%d \t",icnt);
        }
    }

}

int main()
{
    int First_num;
    int Last_num;

    printf("enter  First number:\n");
    scanf("%d",&First_num);

    printf("enter Last number:\n");
    scanf("%d",&Last_num);

    EvenNumber(First_num,Last_num);
}