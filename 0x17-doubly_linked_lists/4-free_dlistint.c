#include "lists.h"
/**
 * free_dlistint - a function that free linked list
 * dlistint_t: the struct
 * @head: the pointer that point to head of the linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
