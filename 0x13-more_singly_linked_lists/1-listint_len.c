#include"lists.h"
/**
 * listint_len - length of list
 * @h: head pointer.
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		h = h->next;
		k++;
	}
	return (k);
}
