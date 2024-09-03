/*WAP OF switch program by using function,
to check character is vowel or constant.take value form user  */
#include<stdio.h>
#include<conio.h>
 void check_vowel(char ch)
{
    switch((ch=='A'|| ch=='E' || ch=='I'|| ch=='O' || ch=='U') ||
       (ch=='a'|| ch=='e' || ch=='i'|| ch=='o' || ch=='u' ))
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
    printf("enter value for character ");
    scanf("%c",&charecter);
    check_vowel(charecter);
}