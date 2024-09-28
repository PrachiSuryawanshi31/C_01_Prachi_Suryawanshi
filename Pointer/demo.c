#include<stdio.h>

int main()
{
    int ino=11;
    int *iptr=&ino;

    char ch='A';
    char *cptr=&ch;

    double d=89.78;
    double *dptr=&d;

    printf("%d\n",ino);   // value of ino is 11
    printf("%c\n",ch);    //value of ch is A
    printf("%lf\n",d);    //value of d is 89.78

    printf("%d\n",&ino);  //address of ino that is 6422300
    printf("%d\n",&ch);   //address of ch that is 6422294
    printf("%d\n",&d);    //address of d that is 6422290

    printf("%d\n",&iptr); //address of iptr
    printf("%d\n",&cptr); //address of cptr
    printf("%d\n",&dptr);  //address of dptr

    printf("%d\n",*iptr);  //value of ino 
    printf("%c\n",*cptr);  //value of c
    printf("%lf\n",*dptr); //value of d

    printf("%d\n",sizeof(iptr)); //size of integer that is 4
    printf("%d\n",sizeof(cptr)); //size of integer that is 4
    printf("%d\n",sizeof(dptr)); //size of integer that is 4

     printf("%d\n",sizeof(*iptr)); //size of integer  that is 4
    printf("%d\n",sizeof(*cptr));  //size of charecter that is 1
    printf("%d\n",sizeof(*dptr));  //size of double  that is 8

}