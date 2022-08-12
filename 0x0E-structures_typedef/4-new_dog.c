#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create dog
 *
 * @name: dog name
 * @age: age of dog
 * @owner: owner dog
 *
 * Description: create a new dog
 *
 * Return: new dog or null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = 0;
	int sizeName = 0;
	int sizeOwner = 0;

	newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == 0)
		return (0);
	while (name[sizeName])
		sizeName++;
	while (owner[sizeOwner])
		sizeOwner++;
	newDog->name = (char *)malloc(sizeof(char) * (sizeName + 1));
	if (newDog->name)
		while (sizeName >= 0)
		{
			newDog->name[sizeName - 1] = name[sizeName - 1];
			sizeName--;
		}
	else
	{
		free(newDog);
		return (0);
	}
	newDog->owner = (char *)malloc(sizeof(char) * (sizeOwner + 1));
	if (newDog->owner)
		while (sizeOwner >= 0)
		{
			newDog->owner[sizeOwner - 1] = owner[sizeOwner - 1];
			sizeOwner--;
		}
	else
	{
		free(newDog->name);
		free(newDog);
		return (0);
	}
	newDog->name[sizeName] = '\0';
	newDog->owner[sizeOwner] = '\0';
	newDog->age = age;
	return (newDog);
}
