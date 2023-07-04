#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - a fuction that add node at the begining of a node
 * @head: the head of the node
 * @str: the string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	unsigned int len = 0;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (nstr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = nstr;
	new_node->next = *head;
	*head = new_node;

	while (str[len])
	{
		len++;
	}
	new_node->len = len;

	return (*head);
}
