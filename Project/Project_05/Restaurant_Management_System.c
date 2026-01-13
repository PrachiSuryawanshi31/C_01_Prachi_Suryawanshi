
#include<stdio.h>
#include<conio.h>
#include<string.h>

void format( char date[], char name[])
{
    printf(" ");
    printf(" \t  GREAT OBSERVER RESTURSNT CLUB \n");
    printf("=================================================\n");
    printf("Date: %s\n" ,date);
    printf("Invoice To: %s\n " ,name);
    printf(" \n");
    printf("-----------------------------------------------------\n");
    printf(" Items ");
    printf("\t\t\t QTY");
    printf("\t\t\t Total \n");
    printf("------------------------------------------------------\n");

    
}




int main()
{
    char date[]="20/9/2025";
    char invoice_name[]="Prachi";
    char name;
    int input_number;

    printf("********************************************************");
    printf("\t\n Welcome to the resturant billing code by using C \n");


    printf("Enter Customer Name:\n");
    scanf("%s\n",&name);

    printf("Enter the Number Of orders requested by the customer: ");
    scanf("%d \n",&input_number);

    format(date, invoice_name);


}