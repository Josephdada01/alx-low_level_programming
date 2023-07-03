#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of the element
 * @h: the pointer that saves the element
 * Return: the element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;/* this is the variable you store the element*/
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
