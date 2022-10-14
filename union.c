#include<stdio.h>
#include<string.h>
union player1{
char name[5];
int run;
int wicket;
}player;
int main()
{
    strcpy(player.name,"dhoni");
    //player.name="dhoni";
    player.run=10000;
    player.wicket=1;

    printf("%s\n",player.name);
    printf("%d\n",player.run);
    printf("%d\n",player.wicket);


    return 0;
}