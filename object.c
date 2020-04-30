#include <stdio.h>
#include "object.h"

//Different words that can be use to do an action
static const char *tags0[] = {"room", NULL};
static const char *tags1[] = {"living room", NULL};
static const char *tags2[] = {"diary", NULL};
static const char *tags3[] = {"mother", NULL};
static const char *tags4[] = {"dog", NULL};
static const char *tags5[] = {"yourself", NULL};
static const char *tags6[] = {"down", "stairs", NULL};
static const char *tags7[] = {NULL};
static const char *tags8[] = {NULL};
static const char *tags9[] = {NULL};
static const char *tags10[] = {"out", NULL};
static const char *tags11[] = {"poster", NULL};
static const char *tags12[] = {NULL};
static const char *tags13[] = {NULL};
static const char *tags14[] = {"tower"};
static const char *tags15[] = {"town"};
static const char *tags17[] = {"town"};
/*
typedef struct object
{
   1. const char *description;
    2. const char **tags;
    3. struct object *location;
    4. struct object *destination;
    5.const char *details;
    6. struct object *prospect;
    7. const char *textGo;
} OBJECT;
*/
int intoPortalIsOpen(OBJECT *obj)
{
    return poster->location != Gaurd;
}

int intoPortalIsClosed(OBJECT *obj)
{
    return poster->location != Gaurd;
}
//Instances of objects in the game
OBJECT objs[] = {
    {"Your room at home", tags0, NULL, NULL, "You have a nice room", NULL, ""},
    {"the living room", tags1, NULL, NULL, "You have a nice living room", NULL, ""},
    {"A diary", tags2, yourRoom, NULL, "Details", NULL, ""},
    {"Mother in bed", tags3, livingRoom, NULL, "Details", NULL, ""},
    {"Your dog sleeping", tags4, yourRoom, NULL, "Details", NULL, ""},
    {"yourself", tags5, yourRoom, NULL, "Details", NULL, ""},
    {"A staircase leading to downstairs", tags6, yourRoom, livingRoom, "Details", NULL, ""},
    {"door that leads to outside", tags7, livingRoom, outside, "Details", outside, ""},
    {"Pictures of your family on the wall", tags8, yourRoom, NULL, "Details", NULL, ""},
    {"Observation: Your home is small", tags9, livingRoom, NULL, "Details", NULL, ""},
    {"Location: Outside", tags10, NULL, NULL, "Details", NULL, ""},
    {"Poster", tags11, outside, NULL, "Details", NULL, ""},
    {"Gaurd", tags12, outside, NULL, "Details", NULL, ""},
    {"Location: Tower", tags13, NULL, NULL, "Details", NULL, ""},
    {"Enterance to the tower", tags14, outside, tower, "There is a place where you can go into the portal\n", tower, "You walk into the portal"},
    {"Portal to Clover Town", tags15, tower, outside, "Details", NULL, "You have left the tower."},
    {"The Welcome Lady", tags12, tower, NULL, "Details", NULL, ""},
};
