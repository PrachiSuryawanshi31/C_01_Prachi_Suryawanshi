/*write a program of marklist of students as per year by using else if ladder*/
#include<stdio.h>
#include<conio.h>
void mark_list(int year)
{
    if(year==2001)
    {
      printf("------------------------------------\n\n");
      printf("Name |  subject  | marks |\n\n");
      printf("Aditi   c language   100\n\n");
      printf("Komal   c++ language   90\n\n");
      printf("Prachi   java language  80\n\n");
    }
    else if(year==2002)
    {
      printf("------------------------------------\n\n");
      printf("Name |  subject  | marks |\n\n");
      printf("Sakshi   c language   60\n\n");
      printf("Shradha  c++ language  90\n\n");
      printf("Arohi   java language  70\n\n");
    }
     else if(year==2002)
    {
      printf("------------------------------------\n\n");
      printf("Name |  subject  | marks |\n\n");
      printf("Sakshi   c language   60\n\n");
      printf("Shradha  c++ language  90\n\n");
      printf("Arohi   java language  70\n\n");
    }
     else if(year==2003)
    {
      printf("------------------------------------");
      printf("Name |  subject  | marks |\n\n");
      printf("mammu   c language   60\n\n");
      printf("Sanskruti  c++ language  90\n\n");
      printf("Ashu   java language  70\n\n");
    }
    else
    {
        printf("no marklis of this year");
    }


}
int main()
{ 
    int year1;
    printf("enter any year for marklist");
    scanf("%d",&year1); 
    mark_list(year1);
    return 0;
}