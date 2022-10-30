#include"lists.h"

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n = 0;

	ptr = *head;
	n = ptr->n;

	*head = (*head)->next;
	free(ptr);
	return (n);
}
