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
	int size_ = 0;

	newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == 0)
		return (0);
	while (name[size_])
		size_++;
	while (owner[size_])
		size_++;
	newDog->name = (char *)malloc(sizeof(char) * (size_ + 1));
	if (newDog->name == 0)
	{
		free(newDog);
		return (0);
	}
	newDog->name[size_] = '\0';
	while (--size_ >= 0)
		newDog->name[size_] = name[size_];
	size_ = 0;
	while (owner[size_])
		size_++;
	newDog->owner = (char *)malloc(sizeof(char) * (size_ + 1));
	if (newDog->owner == 0)
	{
		free(newDog->name);
		free(newDog);
		return (0);
	}
	newDog->owner[size_] = '\0';
	while (--size_ >= 0)
		newDog->owner[size_] = owner[size_];
	newDog->age = age;
	return (newDog);
}
