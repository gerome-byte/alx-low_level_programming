#include"lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;

	if (head == NULL)
		return (NULL);
	if (index != 0)
	{
		for (i = 0; i < index && ptr != NULL; i++)
			ptr = ptr->next;
	
	}
	printf("%d", i);

	if (index == 0)
		return (head);
	else
	{
		return (ptr);
	}

	return (ptr);
}
