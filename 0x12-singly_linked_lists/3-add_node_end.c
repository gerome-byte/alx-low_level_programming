#include "lists.h"
#include<string.h>

/**
 * add_node_end - adds  a new node at the end.
 * @head: head pointer.
 * @str: string to be added.
 * Return: adreesss of new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *xtr;
	size_t m = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	for (; str[m] != '\0'; m++)
		;
	ptr->len = m;
	ptr->next = NULL;
	xtr = *head;
	if (xtr == NULL)
		*head = ptr;
	else
	{
	while (xtr->next != NULL)
		xtr = xtr->next;
	xtr->next = ptr;
	}
	return (*head);
}
