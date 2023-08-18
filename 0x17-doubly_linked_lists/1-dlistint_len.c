#include "lists.h"
/**
 * dlistint_len - a function that return number of elements in linked list
 * dlistint_t: the struct
 * @h: the pointer that point to the head of the node
 * Return: the number of the element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
