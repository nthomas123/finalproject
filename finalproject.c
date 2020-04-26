#include <stdio.h>
#include <string.h>
#include "location.h"
#include "customization.h"
#include "inventory.h"
#include "story.h"

//Input for User Interaction
static char input[100];

//Gets Input from User Continous Function
static int getInput()
{
    printf("\n--> ");
    return fgets(input, sizeof(input), stdin) != NULL;
}
//Analyize user input and perform appropriate action
static int parseAndExecute()
{
    char *verb = strtok(input, " \n");
    char *noun = strtok(NULL, "\n");

    if (verb != NULL)
    {
        if (strcmp(verb, "quit") == 0)
        {
            return 0;
        }
        else if (strcmp(verb, "look") == 0)
        {
            executeLook(noun);
        }
        else if (strcmp(verb, "go") == 0)
        {
            executeGo(noun);
        }
        else if (strcmp(verb, "get") == 0)
        {
            executeGet(noun);
        }
        else if (strcmp(verb, "drop") == 0)
        {
            executeDrop(noun);
        }
        else if (strcmp(verb, "give") == 0)
        {
            executeGive(noun);
        }
        else if (strcmp(verb, "ask") == 0)
        {
            executeAsk(noun);
        }
        else if (strcmp(verb, "inventory") == 0)
        {
            executeInventory();
        }
        else if (strcmp(verb, "read") == 0)
        {
            executeRead(noun);
        }

        else if (strcmp(verb, "talk") == 0)
        {
            executeTalk(noun);
        }
        else
        {
            printf("What are you talking about how to '%s'.\n", verb);
        }
    }
    return 1;
}

//Main function that runs the game
int main()
{
    char typeofPlayer[50];
    printf("You are currently Playing:.\n");

    printf("########  #######  ##      ## ######## ########     #######  ########   ##       #### ######## ######## .\n");
    printf("   ##    ##     ## ##  ##  ## ##       ##     ##   ##     ## ##         ##        ##  ##       ##       .\n");
    printf("   ##    ##     ## ##  ##  ## ##       ##     ##   ##     ## ##         ##        ##  ##       ##       .\n");
    printf("   ##    ##     ## ##  ##  ## ######   ########    ##     ## ######     ##        ##  ######   ######   .\n");
    printf("   ##    ##     ## ##  ##  ## ##       ##   ##     ##     ## ##         ##        ##  ##       ##       .\n");
    printf("   ##    ##     ## ##  ##  ## ##       ##    ##    ##     ## ##         ##        ##  ##       ##       .\n");
    printf("   ##     #######   ###  ###  ######## ##     ##    #######  ##         ######## #### ##       ######## .\n\n");

    //customizePlayer(typeofPlayer); //Stage 1
    introduction();
    executeLook("around");
    while (getInput() && parseAndExecute())
        ;
    printf("\nBye!\n");
    return 0;
}
