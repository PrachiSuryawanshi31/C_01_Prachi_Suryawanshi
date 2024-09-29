#include<stdio.h>
#include<conio.h>

/*Display1
*****
*****
*****
*****
*****
*/
void display1()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/* Display2
11111
22222
33333
44444
55555
*/
void display2()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
/*Display3
12345
12345
12345
12345
12345
*/
void display3()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
/*Display4
55555
44444
33333
22222
11111
*/
void display4()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
/* Display5
54321
54321
54321
54321
54321
*/

void display5()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }


}



int main()
{
    display1();
    printf("-----------------------------------------\n");
    display2();
    printf("-----------------------------------------\n");
    display3();
    printf("-----------------------------------------\n");
    display4();
    printf("-----------------------------------------\n");
    display5();
    

}
