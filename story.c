#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "object.h"

void executeHelp()
{
    printf("This game requires you to type in an action. Bellow I have list all the commands that are available to you:\n");
    printf("\n");
    printf("-help: Provides some assistance in the game. \n");
    printf("-look <around>: List Objects around players current location\n");
    printf("-go <noun(location)>: Quit the game\n");
    printf("-get <object>: Gets Object specified and puts it in inventory\n");
    printf("-drop <object>: Drops object specified at location\n");
    printf("-give <object>: Gives object to another player in the game\n");
    printf("-ask <object>: Asks question\n");
    printf("-inventory: Lists the objects the player has\n");
    printf("-read <object>: Reads object specified\n");
    printf("-talk <object>: talks to person specified\n");

    printf("The command 'look around' will help you if you are stuck.\n");
    printf("If you are stuck in the quiz section 'talk siri', it can help\n");
}

//Stage two Dialog
void introduction()
{
    printf("\n");
    printf("**************YOU ARE CURRENTLY PLAYING THE TOWER OF LIFE*****************\n");
    printf("--------------------------------------------------------------------------\n");
    printf("--------------Climb the Tower, and everything will be yours.---------\n\n");
    printf("Narrator: Here in the Clover realm there exists a mystical tower that will grant you one wish.\n");
    printf("Narrator: Many have tried to climbed this tower but failed to do so. \n");
    printf("Narrator: This was true until a boy named Cloud would defy all odds and accomplish the impossible\n");
    printf("Narrator: Transfering to you to the Clover Realm.....\n");
    sleep(2);
    printf("\n");
    printf("This is an open world game text where the you have some freedom.\nThis game will help you understand OS Concepts.\n");
    printf("If you need assistance in the game or don't know how to progress type in the command 'help'\n");
    printf("\n");
}
void level1Dialog()
{
    printf("Siri: Hello Cloud Welcome to Level One: “Operating Systems Introduction”\n");
    printf("I will be guide for your quest, I will be training you to become a master in the arts of Operating Systems.\n");
    printf("I will also be testing to see if you are worth of continuing this journey.\n");
    sleep(5);
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
    printf("1. Execute user programs and make solving user problems easier\n2.Make the computer system convenient to use\n3. Use the computer hardware and resources in an efficient manner\n");
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
    printf("\nIs following statment true or false?\n");
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

        printf("\n");
        printf("Looks like you need more work\n");
        printf("Talk to Siri and try again\n");
    }
    else
    {
        printf("\n");
        intoLevel2->location = level1;
        printf("Congrates you have passed the first trial\n");
        printf("Your stats have increased.\n");
        printf("You unlocked the Intro BADGE\n");
    }
}
void level2Dialog()
{
    printf("Siri: Hello Cloud Welcome to Level 2: “Operating Systems Structures”\n");

    printf("------------<Learning Section>-------------\n");
    printf("Operating systems provide an environment for execution of programs and services to programs and users. \n The set of operating-system services provides functions that are helpful to the user are: file-system manipulation, communication, error detection, resource sharing, and security.\n");
    printf("<-System Calls->\n");
    printf("Programming interface to the services provided by the OS.\nThe system call interface invokes the intended system call in OS kernel and returns status of the system call and any return values. \n");
    printf(" When using system calls, it is important to understand \n1. Functionality (What it does)\n2. Parameters (What ‘ingredients does it take)\n3. Return Value (What does it return).\n");

    printf("------------<Assessment Section>-------------\n");
    printf("Welcome to the Quiz 2 \nThe quiz has 3 very basic questions on about OS Operating System. You get +2 for each correct answer & -1 for each wrong/invalid answer.\n");
    printf("We are going to examine on of the most basic system programs: File modification.\n File modification allows the os to perform operations on a document such as read, write, edit etc.\n");
    printf(" \n");
    printf("C-library function fopen() The C library function\nFILE *fopen(const char *filename, const char *mode)\nopens the filename pointed to, by filename using the given mode. Returns a file pointer\n ");
    printf("\n");
    int score;
    score = 0;
    int answer;
    printf("Inorder to continue on your quest you must accumilate 6 points.\n");
    printf("\n Question 1:\n");
    printf("What does the function fopens() do?\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
    printf("1. Writes a file \n2.Reads a file\n3.Opens a file\n");
    scanf("%d", &answer);
    if (answer == 3)
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
    printf("\nWhat is one of fopens() parameters?\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
    printf("1. File \n2.Mode \n3.Destination\n");
    scanf("%d", &answer);

    if (answer == 1 | answer == 2)
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
    printf(" What does fopens() return?\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");

    printf("1. A file pointer 2.NULl 3. None of the above\n ");
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
    printf("Your score is %d \n ", score);
    if (score < 5)
    {

        printf("\n");
        printf("Looks like you need more work\n");
        printf("Talk to Siri and try again\n");
    }
    else
    {
        printf("\n");
        printf("\n");
        intoLevel3->location = player->location;
        printf("Congrates you have passed the second trial\n");
        printf("You unlocked the Struct Badge\n");
    }
}
void level3Dialog()
{
    printf("Siri: Hello Cloud Welcome to Level 3: “Operating Systems Process\n");

    printf("------------<Learning Section>-------------\n");
    printf("Process is a program in execution. Process execution must progress in sequential fashion. Program becomes process when executable file loaded into memory\n");
    printf("<-Process States:->\n");
    printf("-new: process is being created\n-running: Instructions are being executed\n-waiting: The process is waiting for some event to occur\n-ready: Process is waiting to be assigned to\n-terminated: Process has finished execution\n");

    printf("------------<Assessment Section>-------------\n");
    printf("Welcome to the Quiz 3 \nThe quiz has 3 very basic questions on about OS Operating System. You get +2 for each correct answer & -1 for each wrong/invalid answer.\n");
    printf("Inorder to continue on your quest you must accumilate 6 points.\n");

    printf("We are going to analyze Process creation.\nAs we learned in the last section process creation has its own system calls that allows the OS to perform and action.\n");
    printf("Given the code: \n");

    printf(" \n");
    printf("int p_id, p_pid;\n p_id=getpid() (process id); \n p_pid=getppid() (parent process id);\n printf('Process ID': __A_, p_id); \n printf('Parent Process ID': __A_, p_pid);");
    printf("\n");
    int score;
    score = 0;
    int answer;
    printf("\n Question 1:\n");
    printf("Lets say we run this code twice. What is the difference between both executions?\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
    printf("1. Process ID \n2.Parent Process ID\n3.None of the above\n");
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
    printf("Lets say we run this code twice. What is the similiar between both executions?\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
    printf("1. Process ID \n2.Parent Process ID\n3.None of the above\n");
    scanf("%d", &answer);
    if (answer == 2)
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
    printf(" Is a process a program?\n");
    printf("To Answer True = 1  and False = 0 \n");
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
    printf("Your score is %d \n ", score);
    if (score < 5)
    {

        printf("\n");
        printf("Looks like you need more work\n");
        printf("Talk to Siri and try again\n");
    }
    else
    {
        printf("\n");
        intoLevel4->location = player->location;
        printf("Congrates you have passed the third trial\n");
        printf("Your stats have increased.\n");
        printf("You unlocked the Process BADGE\n");
    }
}
void level4Dialog()
{
    printf("Siri: Hello Cloud Welcome to Level 4: “Operating Systems Threading\n");

    printf("------------<Learning Section>-------------\n");
    printf("Threading allows processes to run simultaneously. The benefits of threading allows for responsiveness, resource sharing, economy, scalability. \n");
    printf("In Operating Systems there are two types of threads User and Kernel threads.\n Thread library provides programmer with API for creating and managing threads.\n");
    printf("If you don’t understand threading, here is an analogy from doing laundry.\n When doing laundry there are a couple of stages that clothing must go through such as washer, dryer, folding clothing, and storing clothing.");
    printf("However all of these stages must happen in order. If you have multiple loads to do you could always do one load at a time, but this will take to long. A faster way is after one load is done with a stage tranfer it to the next stage and start the second load simutamiusly. This idea is similar to threading.\n");
    printf("Steps to use threading:\n.1.	Instantiate thread.\n2.	Create thread that will execute a function\n3.	Join the threads\n");
    printf("Pthread_create(<name of thread>, NULL,<function to execute>, <parameter to pass>)\n");

    printf("------------<Assessment Section>-------------\n");
    printf("Welcome to the Quiz 3 \nThe quiz has 3 very basic questions on about OS Operating System. You get +2 for each correct answer & -1 for each wrong/invalid answer.\n");
    printf("Inorder to continue on your quest you must accumilate 6 points.\n");

    printf("We are going to analyze Process creation.\nAs we learned in the last section process creation has its own system calls that allows the OS to perform and action.\n");
    printf("Given the code: \n");

    printf(" \n");
    printf("Line 1: pthread_t thread1, thread2;\nLine 2: char *message1 = 'Thread 1';\nLine 3: char *message2 = 'Thread 2';");
    printf("\n");
    int score;
    score = 0;
    int answer;
    printf("\n Question 1:\n");
    printf("Which line instantiates a thread?\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
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
    printf("Given\n");
    printf("1.thread name = thread1\n2.function to execute = print thread\n3.passing parametes = NULL\n");
    printf("What would you plug in for the last parameter for the pthread create function?\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
    scanf("%d", &answer);
    if (answer == 3)
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
    printf("What should you do after you create a thread?\n");
    printf("1. Print it 2. Exit Thread 3. Join it\n");
    scanf("%d", &answer);
    if (answer == 3)
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

        printf("\n");
        printf("Looks like you need more work\n");
        printf("Talk to Siri and try again\n");
    }
    else
    {
        printf("\n");
        intoLevel5->location = player->location;
        printf("Congrates you have passed the fourth trial\n");
        printf("You unlocked the Thread Badge\n");
    }
}
void level5Dialog()
{
    printf("Siri: Hello Cloud Welcome to Level 5: “Process Syncronization\n");

    printf("------------<Learning Section>-------------\n");
    printf("Processes are categorized as two types:\n");
    printf("Independent Process : Execution of one process does not affects the execution of other processes.\nCooperative Process : Execution of one process affects the execution of other processes.\n");
    printf("When more than one processes are executing the same code or accessing the same memory or any shared variable in that condition there is a possibility that the output or the value of the shared variable is wrong.\n This is called a Race Condition.\n");
    printf("The Three types of race conditions are:\n");
    printf("Mutex Exclusion: Only one program at a time is allowed in a critical section.\nDeadlock: a situation where a set of processes are blocked because each process is holding a resource and waiting for another resource acquired by some other process.\nStarvation:  the general definition only states that a specific process is not progressing.\n");

    printf("------------<Assessment Section>-------------\n");
    printf("Welcome to the Quiz 5 \nThe quiz has 3 very basic questions on about OS Operating System. You get +2 for each correct answer & -1 for each wrong/invalid answer.\n");
    printf("Inorder to continue on your quest you must accumilate 6 points.\n");

    int score;
    score = 0;
    int answer;
    printf("\n Question 1:\n");
    printf("In a bakery shop, there is a numbering system that keeps track of the order of the customers.\n The baker uses this system to interact with the customer.\n");
    printf("What is the Critical Section in this analogy?\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");

    printf("1. The customer talks with the baker and tells others to wair wait\n2.When the customer gets their number\n3. All of the above.\n");
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
    printf("Which race conditon allow only one program at a time in a critical section?\n");
    printf("\n");
    printf("1.Mutex 2.Deadlock 3.Starvation\n");

    printf("To Answer Type the corresponding number attached to the selected answer. \n");
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
    printf("In a deadlock, each process can acess the critical secion.\n");
    printf("1. True 0. False\n");
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

        printf("\n");
        printf("Looks like you need more work\n");
        printf("Talk to Siri and try again\n");
    }
    else
    {
        printf("\n");
        intoLevel6->location = player->location;
        printf("Congrates you have passed the fourth trial\n");
        printf("You unlocked the “Process Badge\n");
    }
}
void level6Dialog()
{
    printf("Siri: Hello Cloud Welcome to Level 6: “Process Scheduling\n");

    printf("------------<Learning Section>-------------\n");
    printf("Process scheduling is the activity of the process manager that deals with eliminating the existing CPU process and selecting other processes based on a particular strategy.\n");
    printf("This concept is used to Maximize CPU utilization obtained with multiprogramming.\n. Processes are either running or not running(usually kept in a queue).\nSchedulers main task is to select the jobs to be submitted into the system and to decide which process to run.");
    printf("When more than one processes are executing the same code or accessing the same memory or any shared variable in that condition there is a possibility that the output or the value of the shared variable is wrong.\n This is called a Race Condition.\n");
    printf("Context Switching: Is essentially how the computer saves all of its data when switching from one process to another.");
    printf("The five types of context switching algorithms:\n");
    printf("- FCFS:First come first serve\n-SJF: Shortest Job First\n-Short time remaining\n-Priority: Priority gets schedule first\n-Round Robin: Rotation\n");

    printf("------------<Assessment Section>-------------\n");
    printf("Welcome to the Quiz 5 \nThe quiz has 3 very basic questions on about OS Operating System. You get +2 for each correct answer & -1 for each wrong/invalid answer.\n");
    printf("Inorder to continue on your quest you must accumilate 6 points.\n");

    int score;
    score = 0;
    int answer;
    printf("\n Question 1:\n");
    printf("Which algorithm is the most fairest?\n");
    printf("1.FCFS\n2.BFS\n3. None of the above.\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
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
    printf("Which algorithm minmizes wait time?\n");
    printf("1.SJF 2.Deadlock 3.Round Robinn");

    printf("To Answer Type the corresponding number attached to the selected answer. \n");
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
    printf("Which algorithm is based upon level of importance?\n");
    printf("1. Priority 2. SJF 3. Round Robin\n");
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
    printf("Your score is %d \n ", score);
    if (score < 5)
    {
        printf("\n");
        printf("Looks like you need more work\n");
        printf("Talk to Siri and try again\n");
    }
    else
    {
        printf("\n");
        intoLevel7->location = player->location;
        printf("Congrates you have passed the fourth trial\n");
        printf("You unlocked the Schedule Badge\n");
    }
}
void level7Dialog()
{
    printf("Siri: Hello Cloud Welcome to Level 7: The Final Boss\n");

    printf("You are now ready and fully prepared to face the final boss.\n In order to beat him you must get all the following questions right to deal damage to it.\n This quest will be more difficult than the previous ones. Use the skills and knowledge in order to beat this boss.\n");
    printf("------------<Assessment Section>-------------\n");
    printf("The quiz has 6 very  questions on about the OS Operating System. You get +2 for each correct answer & -1 for each wrong/invalid answer.\n");

    int score;
    score = 0;
    int answer;
    printf("\n Question 1:\n");
    printf("Which are the main roles in operating systems?\n");
    printf("1.Execution of programs\n2.Solves problems easier\n3.Convenience\n4.All the above\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
    scanf("%d", &answer);
    if (answer == 4)
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
    printf("System calls are processes.\n");
    printf("1. True or 0. False\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
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

    printf("\nQuestion 3:\n");
    printf("Process execution does not progress in sequential fashion.\n");
    printf("1. True or 0. False\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
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

    printf("\nQuestion 4:\n");
    printf("What allows processes to run simultaneously?\n");
    printf("1.Process Synchronization\n2.Threading\n3.System Calls\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("That’s Correct !\n");
        score = score + 2;
    }
    else
    {
        printf("Wrong Answer\n");
        score = score - 1;
    }
    printf("\nQuestion 5:\n");
    printf(" A _____ is group of instructions/statements or region of code that need to be executed atomically\n");
    printf("1.Critical section\n2.Mutex Lock\n3.Structure\n");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
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
    printf("\nQuestion 6:\n");
    printf("How does a computer saves all of its data when switching from one process to another?\n");
    printf("1.Context Switching\n2.Registers\n3.None of the above");
    printf("To Answer Type the corresponding number attached to the selected answer. \n");
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

    printf("Your score is %d \n ", score);
    if (score < 5)
    {
        printf("\n");
        printf("Looks like you need more work\n");
        printf("Talk to Siri and try again\n");
    }
    else
    {
        printf("\n");
        intoLevel5->location = player->location;
        printf("Congrates you have passed the fourth trial\n");
        printf("You unlocked the Final Badge\n");
    }
}
void finalDialog()
{
    printf("Zeus: Welcome to the land of the Gods. Challenger please state your name.\n");
    printf("Cloud: My name is Cloud.\n");
    printf("Zeus: I hereby grant Cloud with one wish for completing all the levels in the tower. Please state your wish.\n");
    printf("Cloud: I wish to make my mother better. \n");
    printf("(Zeus grabs the loom of fate and performs the ritual)\n");
    printf("Zeus: Cloud your wish has been granted.\n");
    printf("(Cloud Turns around and sees his mother behind him)\n");
    printf("Cloud: Mother, how are you feeling?\n");
    printf("Mother: I feel so much better now, thank you Cloud for your hard work.\n");
    printf("Cloud: I will do anything for you.\n");
    printf("Zeus: I will transport all of you back to your home. \n");
    printf("---------------------YOU HAVE COMPLETED THE TOWER OF LIFE-----------------\n");
    printf("Exiting the Game...\n");
    exit(0);
}
