#include "lists.h"
/**
 * free_listint - frees list
 * @head: first pointer.
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
