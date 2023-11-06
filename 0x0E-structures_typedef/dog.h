#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - dog structure
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
