#include<stdio.h>
#include<conio.h>
void sip_interest(int principle,int rate,int year)
{
  int simple_interest=(principle*rate*year)/100;
  printf("simple intrest is =[%d]\n",simple_interest);
}
int main()
{
    int p,r,y;
    printf("enter your principle=");
    scanf("%d",&p);
    printf("enter rate =");
    scanf("%d",&r);
    printf("enter yaear=");
    scanf("%d",&y);
    sip_interest(p,y,r);

    return 0;

}