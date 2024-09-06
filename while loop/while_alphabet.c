/*write a program to print natural number by using while loop
and take values from user*/
#include<stdio.h>
#include<conio.h>
void alphabet(char ino1,char ino2) 
{
    while(ino1<=ino2)
    {
        printf("[%c]\t",ino1);
        ino1++;
    }
}
int main()
{    
    char ch1;
    char ch2;
    
    printf("enter first charecter");
    scanf("%c",&ch1);
    printf("enter last charecter");          //send alphabet is not scan
    scanf("%c",&ch2);
    alphabet(ch1,ch2);

}