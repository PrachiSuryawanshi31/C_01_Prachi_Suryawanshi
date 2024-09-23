/*WAP of structure with array and define a structure of student marklist record
 having the student name, roll number, physics mark, chemistry mark,math marks*/
#include<stdio.h>
#include<string.h>

struct info
{
    char name[20];
    int roll_no;
    int physics_marks ,chemistry_marks , math_marks;
};

void display(struct info student[50])
{
    int n;
    int i;
    printf("enter displaying number of student\n");
    scanf("%d",&n);
    printf("\n\nDisplaying data:\n");

    printf("\nName\t\t\tRoll number\t\tphysics marks\t\tchemistry marks\t\tmath marks");
    printf("\n---------------------------------------------------------------------------------------------------------------");
    printf("\n");


    for( i=1; i<=n;i++)
    {
    printf("%s\t\t\t",student[i].name);
    printf("%d\t\t\t",student[i].roll_no);
    printf("%d\t\t\t",student[i].physics_marks);
    printf("%d\t\t\t",student[i].chemistry_marks);
    printf("%d\t\t\t",student[i].math_marks);
    printf("\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
}

}

int main()
{
    struct info s1[100];
    int i;
    int n;

    printf("Enter the number of students\n");
    scanf("%d",&n);

    printf("first data\n");
    
  for(i=1;i<=n;i++)
 {
     {
       printf("enter name:");
       scanf("%s",&s1[i].name);
     }

     {
       printf("enter roll number:");
       scanf("%d",&s1[i].roll_no);
     }

      {
         printf("enter physics marks,chemistry marks,math marks,total:");
         scanf("%d",&s1[i].physics_marks);
        scanf("%d",&s1[i].chemistry_marks);
        scanf("%d",&s1[i].math_marks);
      }
      
     
     
      printf("-----------------------------------------------------------------------------------------------------\n");
     printf("next data \n");
       
    }

    display(s1);
}