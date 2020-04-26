#include <stdio.h>
#include "object.h"
#include "misc.h"

//Function that will move Objects in the game
static void moveObject(const char *noun, OBJECT *from, OBJECT *to)
{
    OBJECT *obj = parseObject(noun);
    if (obj == NULL)
    {
        printf("I don't understand what item you mean.\n");
    }
    else if (from != obj->location)
    {
        switch (distanceTo(obj))
        {
        case distPlayer:
            printf("You should not be doing that to yourself.\n");
            break;
        case distHeld:
            printf("You already have %s.\n", obj->description);
            break;
        case distLocation:
        case distOverthere:
            printf("That's not an item.\n");
            break;
        case distHere:
            if (from == player)
            {
                printf("You have no %s.\n", noun);
            }
            else
            {
                printf("Sorry, %s has no %s.\n", from->description, noun);
            }
            break;
        case distHeldContained:
        case distHereContained:
            printf("Sorry, %s is holding it.\n", obj->location->description);
            break;
        default:
            printf("You don't see any %s here.\n", noun);
        }
    }
    else if (to == NULL)
    {
        printf("There is nobody here to give that to.\n");
    }
    else
    {
        obj->location = to;
        printf("OK.\n");
    }
}
//Function that gets objects in the game
void executeGet(const char *noun)
{
    moveObject(noun, player->location, player);
}
//Fuction that Drops Objects in a location
void executeDrop(const char *noun)
{
    moveObject(noun, player, player->location);
}
//Function that gives objects
void executeGive(const char *noun)
{
    moveObject(noun, player, personHere());
}
//Function that asks in game players
void executeAsk(const char *noun)
{
    moveObject(noun, personHere(), player);
}

//Function that displays inventory
void executeInventory(void)
{
    if (listObjectsAtLocation(player) == 0)
    {
        printf("You are empty-handed.\n");
    }
}

//Function that will read an object that has text
void executeRead(const char *noun)
{

    if (0 == (strcmp(noun, "diary")))
    {
        printf("-----------------------------\n");
        printf("Entry: April 30th  \n");
        printf("-----------------------------\n");
        printf("Today was a good day at work. I planted a field of corn and milked the cows at the barn.\n");
        printf("I dont know if my job as a farmer will help support my family. My mother is getting sicker every passing day. \n");
        printf("I need to find a way to help my mother get better.\n");
    }
    else if (0 == (strcmp(noun, "poster")))
    {
        printf("-----------------------------\n");
        printf("Tower of Life \n");
        printf("-----------------------------\n");
        printf("Looking for brave adventurers that are seeking to complete the the tower. \n");
        printf("Anyone who completes the tower will get one wish \n");
        printf("To join please pick up this poster and go to the statue in the middle of the clover town\n");
    }
    else
    {
        printf("You cant read %s \n", noun);
    }
}

//Function that will execute dialog script
void executeTalk(const char *noun)
{

    if (0 == (strcmp(noun, "mother")))
    {
        printf("Mother: *cough cough* Hey Cloud, could you pick up some medicine for me? I am going to run out soon. \n");
        printf("Cloud: Sure thing Mother, the care taker will be here any minute. Please hang tight. \n");
    }
    else
    {
        printf("You are talking to no one\n");
    }
}