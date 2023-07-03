#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that print elements of arrays
 * @h: the pointer
 * Return: the number of the nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
