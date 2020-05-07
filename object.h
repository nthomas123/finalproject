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
    int health;
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
#define intoLevel2 (objs + 19)
#define level2 (objs + 20)
#define intoLevel3 (objs + 21)
#define level3 (objs + 22)
#define intoLevel4 (objs + 23)
#define level4 (objs + 24)
#define intoLevel5 (objs + 25)
#define level5 (objs + 26)
#define intoLevel6 (objs + 27)
#define level6 (objs + 28)
#define intoLevel7 (objs + 29)
#define level7 (objs + 30)
#define intoTemple (objs + 31)
#define temple (objs + 32)
#define zeus (objs + 33)

#define endOfObjs (objs + 34)
