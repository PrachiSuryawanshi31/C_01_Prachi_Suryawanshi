/*WAp of string by using functio
in this code take following string functions
1.strlen
2.strrev
3.strcpy
4.strcmp
5.strcat*/


#include<stdio.h>
#include<string.h>

int length(char charname[],char chsurname[])
{
    
    printf("length of your name is :%d\n",strlen(charname));
    printf("length of your surname is :%d\n",strlen(chsurname));
}

int copy(char ch1[],char ch2[])
{
    strcpy(ch1,ch2);
    printf("name is :%s\n",ch1);
    printf("surname is :%s\n",ch2);
}

int reverse(char ich1[],char ich2[])
{
    strrev(ich1);
    printf("name reverse is:%s \n",ich1);
    strrev(ich2);
    printf("reverse surname is:%s \n",ich2);
}
 
int comparison(char chname[],char chsurname[])
{
    if(strcmp(chname,chsurname)==0)
    {
        printf("it is equal");
    }
    else
    {
        printf("it is not equal");
    }
}

/*int concatination(char chname[],char chname2)
{
    strcat(chname,chname2);
    printf("your name is =%s",chname);
}
*/

int main()
{
   
   char name[20];
   char surname[30];

   printf("enter your name:");
   scanf("%s",&name);

   printf("enter your surname:");
   scanf("%s",&surname);

   printf("****************Length of string is*************\n");
   length(name,surname);

   printf("*************string copy function************\n");
   copy(name,surname);

   printf("***************reverse the string************\n");
   reverse(name,surname);

   printf("***************string comparison************\n");
   comparison(name,surname);

   //printf("***************string concatination************\n");
   //concatination(name,surname);



}