#include <stddef.h>
#include "lists.h"
#include "stdlib.h"
#include  <stdio.h>
/**
 * listint_len - a function that returns number of the element
 * @h: the pointer that point to the node
 * Return: the number of the element
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
