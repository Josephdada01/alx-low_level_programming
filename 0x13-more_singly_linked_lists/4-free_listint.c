#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that free the structure list
 * @head: the pointer to the head of the node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cur = head;
	listint_t *next;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}
