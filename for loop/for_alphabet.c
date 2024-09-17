/*WAP to print aplabhet from A to Z by using for loop*/
#include<stdio.h>
#include<conio.h>
void albhabet(char ino1,char ino2)
{
    for(int icnt=ino1;icnt<=ino2;icnt++)
    {
        printf("[%c]\t",icnt);
    }
}
int main()
{
    char a,b;
   /*printf("enter first alphabet");
    scanf("%c",&a);
    printf("enter last alphabet");
    scanf("%c",&b);*/
    albhabet('A','z');

}