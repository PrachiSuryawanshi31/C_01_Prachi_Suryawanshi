#include<stdio.h>
#include<conio.h>
/*void datatype()
{
    int a=10;
    float b=10.5;
    char ch='K';
    double d=13.8765;
    long e=12357788;
    printf("a is =[%d]\n",a);
    printf("b is =[%f]\n",b);
    printf("ch is =[%c]\n",ch);
    printf("d is =[%lf]\n",d);
    printf("e is =[%lu]\n",e);

}
int main()
{
    
    datatype();
    return 0;
}
*/
void datatype(int a,float b,long e,double d,char ch)
{
    printf("a is =[%d]\n",a);
    printf("b is =[%f]\n",b);
    printf("e is =[%lu]\n",e);
    printf("d is =[%lf]\n",d);
    printf("ch is =[%c]\n",ch); // charecter is not print on console screen
}
int main()
{
    int p;
    printf("enter value of a interger");  //int a
    scanf("%d",&p);
    float q;
    printf("enter value of q float\n");  // float b
    scanf("%f",&q);
    long t;
    printf("enter value of t long\n");    //long e
    scanf("%lu",&t);
    double s;
    printf("enter value of s double\n");  // double d
    scanf("%lf",&s);
    char r;
    printf("enter value of r char\n ");  // char ch
    scanf("%c",&r);
    
    datatype(p,q,t,s,r);
    return 0;
}