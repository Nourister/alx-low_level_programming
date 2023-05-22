#include <stdlib.h>
#include"dog.h"

/**
 * free_dog - free the dog
 * @d: pointer to the struct dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
