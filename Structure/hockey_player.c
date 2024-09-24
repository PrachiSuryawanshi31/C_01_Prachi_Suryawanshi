#include<stdio.h>
#include<string.h>

struct hockey_player
{
    char name[20];
    int match_played;
    int score;
}p1;

void display()
{
    printf("display information:\n");
    printf("Name:%s\n",p1.name);
    printf("played matches:%d\n",p1.match_played);
    printf("score:%d\n",p1.score);
}
int main()
{
    //struct hockey_player p;

    printf("enter name:\n");
    scanf("%s",&p1.name);
    printf("enter played matches:\n");
    scanf("%d",&p1.match_played);
    printf("enter score:\n");
    scanf("%d",&p1.score);

    display();
    return 0;

}
