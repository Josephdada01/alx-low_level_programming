#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint- a function that print element of a structure
 * @h: the pointer that point to the head of node
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
