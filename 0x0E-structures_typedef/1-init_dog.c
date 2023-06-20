#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a structure about a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * @d: the pointer
 * Description: this is a structure func that initialize variable to dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
