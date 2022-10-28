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
	size_t k;

	if (*head == NULL)
		return (0);
	xtr = *head;
	ptr = xtr->next;
	k = xtr->n;
	free(xtr);
	*head = ptr;
	return (k);
}
