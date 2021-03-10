#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - stores info of dog
 * @d: pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
