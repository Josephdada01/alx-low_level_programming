#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - a function that define new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: null if functions fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* allocating memory for the dog structures */
	dog_t *new_dog = (dog_t *) malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	/* allocating memory for the string name and owner */
	new_dog->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
	new_dog->owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	/*copy the name and owner string */
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
