/*WAP to check the alphabet is vowel or constant*/
#include<stdio.h>
#include<conio.h>
void vowel(char ch)
{
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o' || ch=='u')
    {
        printf(" %c this is vowel....");
    }
    else
    {
        printf("%c this is constant...");
    }
}

int main()
{
    char charecter;
    printf("enter any alphabet..");
    scanf("%c",&charecter);
    vowel(charecter);
}