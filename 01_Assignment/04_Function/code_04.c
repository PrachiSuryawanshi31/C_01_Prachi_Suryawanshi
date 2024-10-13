/*Create an arrow function that calculates the square of a
number. */

#include<stdio.h>
#include<conio.h>

int CalculateSquare(int ino)
{
    int square;
    square=ino*ino;

    printf("Square of %d is =%d",ino,square);
}

int main()
{
    int num;

    printf("enter number:");
    scanf("%d",&num);

    CalculateSquare(num);
}