#include<stdio.h>
#include<conio.h>
void datatype_space_in_byte()
{
    int a;
    float b;
    char ch;
    double d;
    long e;
    printf("size of interger is =[%d]\n",sizeof(a));
    printf("size of float is=[%d]\n",sizeof(b));
    printf("size of charecter is=[%d]\n",sizeof(ch));
    printf("size of double is=[%d]\n",sizeof(d));
    printf("size of long is=[%d]\n",sizeof(d));
}
int main()
{
    printf(" datatype mamory space in byte.....\n**********************\n");
    datatype_space_in_byte();
    return 0;
}