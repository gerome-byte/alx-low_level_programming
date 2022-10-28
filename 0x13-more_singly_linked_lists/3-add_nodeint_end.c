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

	while (xtr != NULL)
	{
		xtr = xtr->next;
	}
	xtr = ptr;
	ptr->n = n;
	ptr->next = NULL;

	return (*head);
}
