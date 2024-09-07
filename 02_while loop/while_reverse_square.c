/*write a program while loop to print reverse square take values from use and
 find ot the cube by using function*/

 #include<stdio.h>
 #include<conio.h>
 int square(int ino1, int ino2)
 {
    while(ino1>=ino2)
    {
        printf("[%d]\t",ino1*ino1);
        ino1--;
    }
 }
 int main()
 {
    int ivalue1;
    int ivalue2;
    printf("enter first value:");
    scanf("%d",&ivalue1);
    printf("enter last value:");
    scanf("%d",&ivalue2);
    return square(ivalue1,ivalue2);

 }