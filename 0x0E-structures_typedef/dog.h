#ifndef H_DOG_H
#define H_DOG_H

/**
 * struct dog - define dog
 * @name: dog name
 * @age: age dog
 * @owner: owner dog
 *
 * Description: define the struct to identifie dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
