#ifndef DOG
#define DOG
/**
 * struct dog - struct describing a dog
 * @name: Name of dog
 * @age: Age
 * @owner: Dog owner
 *
 * dog: Struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;
#endif
