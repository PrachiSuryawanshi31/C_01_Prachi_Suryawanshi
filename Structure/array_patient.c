/*WAP of structure with array and define a structure of patient record
 having the patient name ,age,disease,mbile number and address of patient*/
#include<stdio.h>
#include<string.h>

struct patient_record
{
    char name[20];
    int age;
    char disease_name[30];
    int mobile_no;
    char address[50];

};

void display(struct patient_record patient[50])
{
    int n;
    int i;
    printf("enter displaying number of patient\n");
    scanf("%d",&n);
    printf("Display records of patient\n");

    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("\nName\t\t\tAge\t\tDisease\t\t\tMobile No\t\tAddress");
    printf("\n---------------------------------------------------------------------------------------------------------------");
    printf("\n");

    for( i=1; i<=n;i++)
    {
    printf("%s\t\t\t",patient[i].name);
    printf("%d\t\t\t",patient[i].age);
    printf("%s\t\t",patient[i].disease_name);
    printf("%d\t\t",patient[i].mobile_no);
    printf("%s\t",patient[i].address);
    printf("\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
   }    
}
int main()
{
    struct patient_record p1[100];
    int i;
    int n;

    printf("Enter the number of patient\n");
    scanf("%d",&n);

  for(i=1;i<=n;i++)
 {
     {
       printf("enter name:\n");
       scanf("%s",&p1[i].name);
     }

     {
       printf("enter age:\n");
       scanf("%d",&p1[i].age);
     }
     
     {
       printf("enter disease name:\n");
       scanf("%s",&p1[i].disease_name);
     }
     
     {
       printf("enter mobile number:\n");
       scanf("%d",&p1[i].mobile_no);
     }
     {
       printf("enter Address:\n");
       scanf("%s",&p1[i].address);
     }

      printf("-----------------------------------------------------------------------------------------------------\n");
    
      
    }

    display(p1);
}

