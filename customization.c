#include <stdio.h>
#include <string.h>
/*
This is the first stage of the game. The player must complete the following survey inorder to progress through the game
*/
//Player Customization structure
struct playerCustomize
{
    const char *Haircolor;
    const char *Build;
    const char *Costume;
    const char *CostumeColorway;
    const char *Background;

} player[] = {
    {"Black", "Bulky", "Warrior", "Black and Blue", "Swordsman"}};
static unsigned locationOfPlayer = 0;

int temp;

//Function that fills in the results of the player structure
void customizePlayer(char *str)
{
    printf("*******Customize Your Character*******\n");
    printf("Before you get started on playing the game, please customize your player.\n");
    printf("Note: Once You Customize your player, you can not change it\n\n");
    printf("What Color is your hair?\n");
    printf("1 = Black | 2 = Brown \n");
    scanf("%d", &temp);
    switch (temp)
    {
    case 1:
        player[locationOfPlayer].Haircolor = "Black";
        break;
    case 2:
        player[locationOfPlayer].Haircolor = "Brown";
        break;
    }

    printf("What your build?\n");
    printf("1 = Skinny | 2 = Buff \n");
    scanf("%d", &temp);
    switch (temp)
    {
    case 1:
        player[locationOfPlayer].Build = "Skinny";
        break;
    case 2:
        player[locationOfPlayer].Build = "Buff";
        break;
    }

    printf("What Costume are you wearing?\n");
    printf("1 = Warrior | 2 = Magician \n");
    scanf("%d", &temp);
    switch (temp)
    {
    case 1:
        player[locationOfPlayer].Costume = "Warrior";
        break;
    case 2:
        player[locationOfPlayer].Costume = "Magician";
        break;
    }

    printf("What is the colorway of your costume?\n");
    printf("1 = Black and Blue | 2 = White and Red | 3 = Grey and Yellow \n");
    scanf("%d", &temp);
    switch (temp)
    {
    case 1:
        player[locationOfPlayer].CostumeColorway = "Black and Blue";
        break;
    case 2:
        player[locationOfPlayer].CostumeColorway = "White and Red";
        break;
    case 3:
        player[locationOfPlayer].CostumeColorway = "Grey and Yellow";
        break;
    }
    printf("What is your choice of weapon?\n");
    printf("1 = Sword | 2 = Bow \n");
    scanf("%d", &temp);
    switch (temp)
    {
    case 1:
        player[locationOfPlayer].Background = "Sword";
        break;
    case 2:
        player[locationOfPlayer].Background = "Bow";
        break;
    }

    printf("You have a %s build with %s hair. \n You are wearing a %s %s costume\n", player[locationOfPlayer].Build, player[locationOfPlayer].Haircolor, player[locationOfPlayer].CostumeColorway, player[locationOfPlayer].Costume);
    printf("You will persuing the role as a(n) %s \n", player[0].Background);
    sleep(1);

    strcpy(str, player[0].Background);
}