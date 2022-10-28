#include "lists.h"
/**
 * free_listint2 - frees a list.
 * @head: first pointer
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *xtr;

	if (head != NULL)
	{
		xtr = *head;

		while ((ptr = xtr) != NULL)
		{
			xtr = xtr->next;
			free(ptr);
		}
		*head = NULL;
	}
}
