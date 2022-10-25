#include "lists.h"



/**
 * print_list - prints linked- lists
 * @h: pointer to list.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	
	if (h == NULL)
		printf("error\n");
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
		
	}
	return (n);
}
