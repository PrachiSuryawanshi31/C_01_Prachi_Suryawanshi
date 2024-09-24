#include <stdio.h>
#include <string.h>

struct Person
 {
    char name[50];
    int age;
    float salary;
    char education[50];

}p1;
 void display()
 {
    printf("\n Display information\n");
    
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Salary: %lf\n", p1.salary);
    printf("Education: %s\n", p1.education);
    
}
 
int main()
 {

    printf("Enter name: ");
    scanf("%s", &p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    printf("Enter salary: ");
    scanf("%f", &p1.salary);
    printf("enter your degree:");
    scanf("%s", &p1.education);

    display();

    return 0;
}
 
 