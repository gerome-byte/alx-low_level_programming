#include"lists.h"

/**
 * insert_nodeint_at_index - insert node at a given index.
 * @head: first pointer.
 * @idx: index of node.
 * @n: data.
 * Return: address of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *xtr;
	unsigned int i;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	xtr = *head;
	if (idx != 0)
	{
	for (i = 0; i < idx - 1; i++)
		xtr = xtr->next;
	}
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		ptr->next = xtr->next;
		xtr->next = ptr;
	}
	return (ptr);
}
