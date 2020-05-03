#include <stdio.h>
#include <string.h>

//Stage two Dialog
void introduction()
{
    printf("--------------------------------------------------------------------------\n");
    printf("Narrator: --------Climb the Tower, and everything will be yours.---------\n");
    printf("Narrator: Here in the Clover realm there exists a mystical tower that will grant you one wish.\n");
    printf("Narrator: Many have tried to climbed this tower but failed to do so. \n");
    printf("Narrator: This was true until a boy named Cloud would defy all odds and accomplish the impossible\n");
    printf("Narrator: Transfering to you to the Clover Realm.....\n");
    sleep(2);
}
void level1Dialog()
{
    printf("Siri: Hello Cloud Welcome to Level One: “Operating Systems Introduction”\n");
    printf("I will be guide for your quest, I will be training you to become a master in the arts of Operating Systems.\n");
    printf("I will also be testing to see if you are worth of continuing this journey.\n");
    printf("-------------Lets get Started-------------\n");

    printf("The main goals for Operating system are to: \n 1. Execute user programs and make solving user problems easier \n 2.Make the computer system convenient to use \n 3. Use the computer hardware and resources in an efficient manner\n");
    printf("OS is a resource allocator and a controller of programs. \n A kernel is the central part of an operating system. It manages the operations of the computer and the hardware, most notably memory and CPU time.\n");
    printf("\n");
    int score;
    score = 0;
    int answer;
    printf("Welcome to the Quiz 1 \nThe quiz has 3 very basic questions on about OS Operating System. You get +2 for each correct answer & -1 for each wrong/invalid answer.\n");
    printf("Inorder to continue on your quest you must accumilate 6 points.\n");
    printf("\n Question 1:\n");
    printf("Are these the main goals for operating systems?\n");
    printf("To Answer True = 1  and False = 0 \n");
    printf("1. Execute user programs and make solving user problems easier\n 2.Make the computer system convenient to use\n 3. Use the computer hardware and resources in an efficient manner\n");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("That’s Correct !\n");
        score = score + 2;
    }
    else
    {
        printf("Wrong Answer\n");
        score = score - 1;
    }
    printf("\nQuestion 2:\n");
    printf("\n Is following statment true or false?\n");
    printf("To Answer True = 1  and False = 0 \n");
    printf("OS is a resource allocator and a controller of programs.\n ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("That’s Correct !\n");
        score = score + 2;
    }
    else
    {
        printf("Wrong Answer\n");
        score = score - 1;
    }

    printf("\nQuestion 3:\n");
    printf(" Is following statment true or false?\n");
    printf("To Answer True = 1  and False = 0 \n");
    printf("A slab is the central part of an operating system.\n ");
    scanf("%d", &answer);
    if (answer == 0)
    {
        printf("That’s Correct !\n");
        score = score + 2;
    }
    else
    {
        printf("Wrong Answer\n");
        score = score - 1;
    }
    printf("Your score is %d \n ", score);
    if (score < 5)
    {

        printf("Looks like you need more work\n");
        printf("Talk to Siri and try again\n");
    }
    else
    {

        printf("Congrates you have passed the first trial\n");
        printf("Your stats have increased.\n");
        printf("You unclocked the OS BADGE\n");
    }
}