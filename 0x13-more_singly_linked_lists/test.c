#include"lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *xtr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	xtr = *head;
	if (*head == NULL)
		*head = ptr;
	else
	{
		while (xtr->next != NULL)
		{	
			xtr = xtr->next;
		}

		xtr->next = ptr;
	}
	return (ptr);
}
