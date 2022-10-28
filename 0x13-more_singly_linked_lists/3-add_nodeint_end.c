#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of the list
 * @head: head pointer
 * @n: data to be entered.
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *xtr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	xtr = *head;
	if (xtr == NULL)
		*head = ptr;
	else
	{
		while (xtr->next != NULL)
		{
			xtr = xtr->next;
		}
		xtr->next = ptr;
	}
	ptr->n = n;
	ptr->next = NULL;

	return (*head);
}
