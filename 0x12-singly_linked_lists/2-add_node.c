#include"lists.h"
#include<string.h>

/**
 * add_node - adds a new node.
 * @head: double pointer.
 * @str: new string.
 * Return: number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
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
	ptr->next = *head;
	*head = ptr;
	return (*head);
}



