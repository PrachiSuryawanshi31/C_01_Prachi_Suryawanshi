/*write a program to check given value is alphabet or number*/

#include<stdio.h>
#include<conio.h>
void alphabet_or_not(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("this is alphabet");
    }
    else
    {
        printf("this is number");

    }
    
}
int main()
{
  char alphabet;
  printf("enter value to check given value is alphabet or not");
  scanf("%c",&alphabet);
 alphabet_or_not(alphabet);

}