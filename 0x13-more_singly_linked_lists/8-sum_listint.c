#include"lists.h"

/**
 * sum_listint - sums up all the node data.
 * @head: head pointer.
 * Return: the sum of all the node data.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	size_t k = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		k += ptr->n;
		ptr = ptr->next;
	}
	return (k);
}
