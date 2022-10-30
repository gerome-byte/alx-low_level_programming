#include"lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *ptr;
	listint_t *xtr;
	unsigned int i;

	xtr = malloc(sizeof(listint_t));
	if (xtr == NULL)
		return (NULL);
	xtr->n = n;

	if (*head == NULL)
		return (NULL);
	ptr = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
			ptr = ptr->next;
	}
	if (idx == 0)
	{
		xtr->next = *head;
		*head = xtr;
		return (xtr);
	}

	else
	{
		xtr->next = ptr->next;
		ptr->next = xtr;
	}
	
	return (xtr);

}

