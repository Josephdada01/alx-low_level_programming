#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function that free dog
 * @d: the pointer
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
