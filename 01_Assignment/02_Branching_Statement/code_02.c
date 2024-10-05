/*mplement a grading system that assigns grades (A, B, C, etc.)
based on a student's score using if-else conditions*/

#include<stdio.h>
#include<conio.h>

int grade_system(int mark)
{
    if(mark>90 && mark<=100)
    {
        printf("you have %d mark \n then you are A grade \n",mark);
    }

    else if(mark>75 && mark<90)
    {
        printf("you have %d mark \n then you are B grade \n",mark);
    }

    else if(mark>60 && mark<=75)
    {
        printf("you have %d mark \n then you are C grade \n",mark);
    }
}

int main()
{
    int marks;

    printf("enter your marks \n");
    scanf("%d",&marks);

    grade_system(marks);
}