#include<stdio.h>
#include<conio.h>
void swap2(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping of a=[%d]\n",a);
    printf("swapping of b=[%d]\n",b);
}
void swap3(int p ,int q)
{
    int r=p;
    p=q;
    q=r;
    printf("swapping of p=[%d]\n",p);
    printf("swapping of q=[%d]\n",q);


}

int main()
{
    int x,y;
    printf("enter the value of a=");
    scanf("%d",&x);
    printf("enter the value of b=");
    scanf("%d",&y);
    swap2(x,y);
    int d,s;
    printf("enter the value of p=");
    scanf("%d",&d);
    printf("enter the value of q=");
    scanf("%d",&s);
    swap3(d,s);
    return 0;
}