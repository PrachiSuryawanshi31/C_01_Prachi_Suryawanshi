#include<stdio.h>
#include<string.h>

 struct tender_member 
 {
    char name[50];
    long tender_cost;
    char company_name[60];
 };

 void display(struct tender_member t)
 {
    printf("Displaying Data\n");

    printf("Tender Name:%s\n",t.name);
    printf("Tender cost:%d\n",t.tender_cost);
    printf("company Name:%s\n",t.company_name);
 }

 int main()
 {
    struct tender_member t1;

    printf("enter name:\n");
    scanf("%s",&t1.name);
    printf("enter tender cost:\n");
    scanf("%lu",&t1.tender_cost);
    printf("enter company name:\n");
    scanf("%s",&t1.company_name);
  

    display(t1);
    return 0;
 }