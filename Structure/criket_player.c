#include<stdio.h>
#include<string.h>

struct criket_player  
{
   char name[20];
   int run;
   int wicket;
}p1;

void display_info()
{
  printf("Displaying information:\n");

  printf("Name:%s\n",p1.name);
  printf("Run:%d\n",p1.run);
  printf("wicket:%d\n",p1.wicket);

}
int main()
{
   
    printf("enter name:\n");
    scanf("%s",&p1.name);
    printf("enter runs:\n");
    scanf("%d",&p1.run);
    printf("enter wicket:\n");
    scanf("%d",&p1.wicket);

    display_info();
}