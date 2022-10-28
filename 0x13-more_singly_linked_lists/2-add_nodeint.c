#include"lists.h"
/**
 * add_nodeint - adds node at the beginning.
 * @head: first second.
 * @n: number to insert
 * Return: address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}

