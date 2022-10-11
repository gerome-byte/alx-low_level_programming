#include "main.h"

/**
 * *_calloc - allocates memory for an array of n elements of size bytes each.
 * @nmemb: number of elements.
 * @size: byte size.
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	 int i;
	 void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	for  (i = 0; i < nmemb; i++)
		s = malloc(i * size);
	if (!s)
		return (NULL);
	 s = 0;
	return (s);
}
