#include"lists.h"

/**
 * reverse_listint - revverses the list.
 * @head: first pointer.
 * Return: the address of the new first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *xtr = NULL;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = xtr;
		xtr = *head;
		*head = ptr;
	}
	*head = xtr;
	return (*head);
}


