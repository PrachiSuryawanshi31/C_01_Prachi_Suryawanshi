#include<stdio.h>
#include<conio.h>
void sum(int n)
{
    int a,b,c,d;
    a=n%10;
    n=n/10;

    b=n%10;
    n=n/10;

    c=n%10;
    n=n/10;

    d=n%10;
    n=n/10;
    int sum=a+b+c+d;
    printf("sum is =[%d]",sum);
}

 void reverse(int n)
 {
    int a,b,c,d;
    a=n%10;
    n=n/10;

    b=n%10;
    n=n/10;

    c=n%10;
    n=n/10;

    d=n%10;
    n=n/10;
    int rev=(a*1000)+(b*100)+(c*10)+(d*1);
    printf("reverse is =[%d]",rev);
 }
int main()
{
    int a;
    printf("enter value =");
    scanf("%d",&a);
    sum(a);
    reverse(a);

    return 0;
}