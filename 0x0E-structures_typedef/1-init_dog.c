#include "dog.h"

/**
 * init_dog - initializes dog
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 * @d: fourth parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
