/*Write a program to check whether a given character is a vowel
or consonant using a switch-case statement.*/

#include<stdio.h>
#include<conio.h>

void check_charecter(char ch)
{
    switch((ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') &&
             (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'))
    {

        case 1:
        printf("%c is vowel",ch);
        break;
        
        case 0:
        printf("%c is constant",ch);
        break;

    }
}

int main()
{
    char charecter;
    
    printf("enter any charecter\n");
    scanf("%c",&charecter);

    check_charecter(charecter);
}