//Game object structures
typedef struct object
{
    const char *description;
    const char **tags;
    struct object *location;
    struct object *destination;
    const char *details;
    struct object *prospect;
    const char *textGo;
} OBJECT;

//Object Decleration
extern OBJECT objs[];
#define yourRoom (objs + 0)
#define livingRoom (objs + 1)
#define diary (objs + 2)
#define mother (objs + 3)
#define dog (objs + 4)
#define player (objs + 5)
#define staircase (objs + 6)
#define exitHouse (objs + 7)
#define wallField (objs + 8)
#define wallCave (objs + 9)
#define outside (objs + 10)
#define poster (objs + 11)
#define Gaurd (objs + 12)
#define tower (objs + 13)
#define intoTower (objs + 14)
#define exitTower (objs + 15)
#define towerLady (objs + 16)
#define siri (objs + 17)
#define level1 (objs + 18)

#define endOfObjs (objs + 19)
