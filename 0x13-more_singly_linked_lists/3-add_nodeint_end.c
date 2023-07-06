#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - a fuction that add node in the end of the function
 * @head: the pointer that point to the head
 * @n: the integer n
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *cur = *head;

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (cur->next)
		{
			cur = cur->next;
		}
		if (cur != n_node)
		{
			cur->next = n_node;
		}
	}
	return (n_node);
}
