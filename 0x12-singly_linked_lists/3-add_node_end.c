#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - a function that add node to the end of node
 * @head: the beginnig of the node
 * @str: the pointer that will store the new node
 * Return: the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *n_node = (list_t *)malloc(sizeof(list_t));
	char *stc = strdup(str);
	unsigned int len = 0;

	while (str[len])
		len++;

	if (n_node == NULL)
	{
		return (NULL);
	}
	if (stc == NULL)
	{
		free(n_node);
		return (NULL);
	}
	/* populate the node */
	n_node->str = stc;
	n_node->len = len;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = n_node;
	}
	return (n_node);
}
