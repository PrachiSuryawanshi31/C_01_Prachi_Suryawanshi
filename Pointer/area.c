/*WAP to perfrom the area of circle,square,reactangle,triangle in pointer
by using function
take value from user*/

#include<stdio.h>
#include<conio.h>

int circle_area(int r)
{
    int *ptr1=&r;
    int area;

    printf("\n\n\t area of circle\t\n ");
    area=3.14* *ptr1 * *ptr1;
    printf("area of circle=%d",area);
     printf("-------------------------------------------\n");
    
}
   int square_area(int s)
   {
    int *ptr2=&s;
    int area;
     printf("\n\n\t area of square\t\n ");
    area=(*ptr2)*(*ptr2)*(*ptr2)*(*ptr2);
    printf("area of square=%d",area);
     printf("-------------------------------------------\n");

   }

   int rectangle_area(int l,int w)
   {
     int *ptr3=&l;
    int *ptr4=&w;
    int area;
      
    printf("\n\n\t area of rectangle\t\n ");
    area=(*ptr3)*(*ptr4);
    printf("area of rectangle=%d",area);
    printf("-------------------------------------------\n");

   }

   int triangle_area(int h,int b)
   {
      int *ptr5=&h;
    int *ptr6=&b;
    int area;

    printf("\n\n\t area of tringle\t\n ");
    area=(*ptr5)*(*ptr6)/2;
    printf("area of triangle=%d",area);
     printf("-------------------------------------------\n");

   }

     int main()
  {
    int redius;
    int side;
    int length;
    int width;
    int height;
    int breadth;

    printf("enter redius of circle\n");
    scanf("%d",&redius);

    printf("enter side of square\n");
    scanf("%d",&side);

    printf("enter length of rectangle\n");
    scanf("%d",&length);

    printf("enter width of rectangle\n");
    scanf("%d",&width);

    printf("enter height of triangle\n");
    scanf("%d",&height);

    printf("enter breadth of triagle\n");
    scanf("%d",&breadth);

    circle_area(redius);
    square_area(side);
    rectangle_area(length ,width);
    triangle_area(height, breadth);
   }