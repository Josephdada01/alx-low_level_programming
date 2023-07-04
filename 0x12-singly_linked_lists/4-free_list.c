#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that free struct list
 * @head: the head of the node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *cur;

	while (head)
	{
		cur = head->next;
		free(head->str);
		free(head);
		head = cur;
	}
}
