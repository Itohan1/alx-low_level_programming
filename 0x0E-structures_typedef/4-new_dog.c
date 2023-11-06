#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t i, j, k;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0 ; name[j] != '\0' ; j++)
		j++;
	dog->name = malloc(sizeof(char) * j);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0 ; k < j ; k++)
		dog->name[k] = name[k];
	dog->age = age;

	for (i = 0 ; owner[i] != '\0' ; i++)
		i++;
	dog->owner = malloc(sizeof(char) * i);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (k = 0 ; k < i ; k++)
		dog->owner[k] = owner[k];
	dog->age = age;
	return (dog);
}
