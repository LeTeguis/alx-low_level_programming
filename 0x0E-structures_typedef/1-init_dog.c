#include "dog.h"

/**
 * init_dog - init the dog variable
 *
 * @d: dog result
 * @name: name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 *
 * Description: initialize the dog data
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
