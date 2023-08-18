#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list.
 * dlistint_t: the struct
 * @head: the pointer to the head
 * @n: the constant integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
