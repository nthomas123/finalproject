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

//Instances of objects in the game
OBJECT objs[] = {
    {"your room at home", tags0, NULL, NULL},
    {"in the living room", tags1, NULL, NULL},
    {"A diary", tags2, yourRoom, NULL},
    {"Mother in bed", tags3, livingRoom, NULL},
    {"Your dog sleeping", tags4, yourRoom, NULL},
    {"yourself", tags5, yourRoom, NULL},
    {"a staircase leading to downstairs", tags6, yourRoom, livingRoom},
    {"door that leads to outside", tags7, livingRoom, outside},
    {"Pictures of your family on the wall", tags8, yourRoom, NULL},
    {"Observation: Your home is small", tags9, livingRoom, NULL},
    {"Outside", tags10, NULL, NULL},
    {"Poster", tags11, outside, NULL},
    {"Statue", tags12, outside, NULL}};