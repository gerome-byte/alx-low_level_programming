#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	
	while (*head)
	{
		if (*head == NULL)
			printf("(nil)");

		ptr = *head;
		*head  = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
