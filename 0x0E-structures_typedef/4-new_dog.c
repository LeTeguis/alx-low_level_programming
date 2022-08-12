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
	struct dog *newDog = 0;
	int sizeName = 0;
	int sizeOwner = 0;

	newDog = (struct dog *)malloc(sizeof(struct dog));

	if (newDog == 0)
		return (0);
	while (name[sizeName])
		sizeName++;
	while (owner[sizeOwner])
		sizeOwner++;
	newDog->name = (char *)malloc(sizeof(char) * sizeName);
	if (newDog->name)
		while (sizeName >= 0)
		{
			newDog->name[sizeName - 1] = name[sizeName - 1];
			sizeName--;
		}
	newDog->owner = (char *)malloc(sizeof(char) * sizeOwner);
	if (newDog->owner)
		while (sizeOwner >= 0)
		{
			newDog->owner[sizeOwner - 1] = owner[sizeOwner - 1];
			sizeOwner--;
		}
	newDog->age = age;
	return (newDog);
}
