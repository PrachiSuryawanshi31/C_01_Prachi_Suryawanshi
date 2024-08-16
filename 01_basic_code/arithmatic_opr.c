#include<stdio.h>
#include<conio.h>
void addition(int ivalue1,int ivalue2)
{
    int ians;
    ians=ivalue1+ivalue2;
    printf("addition =[%d]\n",ians);

}
void substraction(int ivalue1,int ivalue2) 
{
    int ians;
    ians=ivalue1-ivalue2;
    printf("substraction=[%d]\n",ians);
}
void multiplication(int ivalue1,int ivalue2)
{
    int ians;
    ians=ivalue1*ivalue2;
    printf("multiplition=[%d]\n",ians);
} 
void division(int ivalue1,int ivalue2)
{
    int ians;
    ians=ivalue1/ivalue2;
    printf("division=[%d]\n",ians);
}
void module(int ivalue1,int ivalue2)
{
    int ians;
    ians=ivalue1%ivalue2;
    printf("module=[%d]\n",ians);
}



int main()
{
 int ino1;
 int ino2;
 int ino3;
 printf("enter value for ino1\n");
 scanf("%d",&ino1);
 printf("enter value for ino2\n");
 scanf("%d",&ino2);
 addition(ino1,ino2);
 substraction(ino1,ino2);
 multiplication(ino1,ino2);
 division(ino1,ino2);
 module(ino1,ino2);
 return 0;
}