#include"lista.h"

/**
 * list_len - numberof elements in the list.
 * @h: head pointer.
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t k;

	k = 0;
	while (h != NULL)
	{
		h = h->next;
		k++;
	}
	return (k);
}

