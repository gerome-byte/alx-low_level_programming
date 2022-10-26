#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds  a new node at the end.
 * @head: head pointer.
 * @str: string to be added.
 * Return: adreesss of new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	size_t m = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	for (; str[m] != '\0'; m++)
		;
	ptr->len = m;
	ptr->next = NULL;
	while (*head != NULL)
		*head = *head->next;
	*head->next = ptr;
	return (*head->next);
}
