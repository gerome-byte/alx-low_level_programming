#include"lists.h"
/**
 * delete_nodeint_at_index - deletes node at index x.
 * @head: first pointer.
 * @index: index of node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *xtr;
	unsigned int i;

	xtr = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && xtr != NULL; i++)
		{
			xtr = xtr->next;
		}
	}
	if (xtr == NULL || (xtr->next == NULL && index != 0))
	{
		return (-1);
	}
	ptr = xtr->next;


	if (index == 0)
	{
		xtr->next = ptr->next;
		free(ptr);
	}
	else
	{
		free(xtr);
		*head = ptr;
	}
	return (1);
}
