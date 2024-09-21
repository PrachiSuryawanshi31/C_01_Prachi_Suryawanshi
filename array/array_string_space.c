#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    char arr[40];
    printf("enter your name:\n");
    scanf("%['\n']s",arr);

    //scanf("%s",&arr);

    printf("Your name is %s\n",arr);

    return 0;
}