#include "lists.h"
/**
 * print_dlistint - a function that prints all element
 * dlistint_t: the struct
 * @h: the pointer pointing to the head
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_node++;
	}
	return (count_node);
}
