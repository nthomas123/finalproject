//Game object structures
typedef struct object
{
    const char *description;
    const char **tags;
    struct object *location;
    struct object *destination;
    int (*condition)(struct object *);

    /*
    const char *details;
    const char    *textGo;
    int            health;
*/
} OBJECT;

//Object Decleration
extern OBJECT objs[];
#define yourRoom (objs + 0)
#define livingRoom (objs + 1)
#define diary (objs + 2)
#define mother (objs + 3)
#define dog (objs + 4)
#define player (objs + 5)
#define outTheDoor (objs + 6)
#define exitCave (objs + 7)
#define wallField (objs + 8)
#define wallCave (objs + 9)
#define outside (objs + 10)
#define poster (objs + 11)

#define endOfObjs (objs + 12)