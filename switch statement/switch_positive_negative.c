/*WAP Of switch program by using function,
to check number is positive or negative .take value form user  */
#include<stdio.h>
#include<conio.h>
void check_number(int ino)
{
    switch(ino>0)
    {
        case 1:
        printf(" %d number is positive",ino);
        break;
         
    
      case 0: 
      switch(ino<0)
        {
            case 1:
            printf("%d number is negative",ino);
            break;

            case 0:
            printf("%d number is zero",ino);
            break;
        }
    
    }
}
int main()
{
    int num;
    printf("enter value for number to check number is positive or negative");
    scanf("%d",&num);
   check_number(num);
}