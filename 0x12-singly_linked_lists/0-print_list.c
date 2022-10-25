#include "lists.h"



/**
 * print_list - prints linked- lists
 * @h: pointer to list.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;
	list_t *ptr;

	if (h == NULL)
		printf("error\n");
	ptr = h;
	if (ptr != NULL)
	{
		if (str == NULL)
			printf("[0] (nil)\n");

		printf("[%d] %s\n", ptr->str, ptr->len);
		ptr = ptr->next;
		n++;
	}
	size_t = n;
	return (n);
}
