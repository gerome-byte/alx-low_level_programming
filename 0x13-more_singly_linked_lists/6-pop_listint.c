#include"lists.h"
/**
 * pop_listint - deletes the head node.
 * @head: first pointer.
 * Return: head node data.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *xtr;

	xtr = *head;
	if (xtr == NULL)
		return (0);
	ptr = xtr;
	xtr = xtr->next;
	*head = xtr;
	return (ptr->n);
}
