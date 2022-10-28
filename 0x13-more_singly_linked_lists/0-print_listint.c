#include"lists.h"
/**
 * print_listint - prints all the elements of the node.
 * @h: first pointer.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
