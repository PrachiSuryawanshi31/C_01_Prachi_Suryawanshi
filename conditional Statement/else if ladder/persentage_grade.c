/*WAP of grade.take five subject marks from user and
 calculate persentage of student and check which grade is got 
 depending upon the persentage ,by using if else ladder*/
#include<stdio.h>
#include<conio.h>
void grade(int eng,int math1,int phy,int che,int biology)
{
    int total=eng+math1+phy+che+biology;
    int persentage=total*100/500;

    printf("persentage is=%d\n\n",persentage);
    if(persentage>90 && persentage<=100)
    {
        printf("you are topper and you got A grade");
    }
    else if(persentage>80 && persentage<=90)
    {
        printf(" you got B grade");
    }
     else if(persentage>65 && persentage<=80)
    {
        printf(" you got C grade");
    }
    else if(persentage>35 && persentage<=65)
    {
        printf(" you are pass");
    }
    else if(persentage<35)
    {
        printf(" you are fail");
    }
    
}
int main()
{
    int english;
    int math;
    int physics;
    int chemestry;
    int bio;
    
    printf("enter marks of english subject \n");
    scanf("%d",&english);
    printf("enter marks of math subject \n");
    scanf("%d",&math);
    printf("enter marks of physics subject \n");
    scanf("%d",&physics);
    printf("enter marks of chemestry subject \n");
    scanf("%d",&chemestry);
    printf("enter marks of biology subject \n");
    scanf("%d",&bio);
    
    grade(english ,math,physics,chemestry,bio);
}