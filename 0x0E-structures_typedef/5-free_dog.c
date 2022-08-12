#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog
 *
 * @d: dog variable to free
 *
 * Description: delete the dog variable
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		if (d->name != 0)
			free(d->name);
		if (d->owner != 0)
			free(d->owner);
		free(d);
	}
}
