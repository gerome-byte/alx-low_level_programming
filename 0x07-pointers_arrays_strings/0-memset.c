#include "main.h"

/**
 * *_memset - fills the first n bytes of memory
 * @s - pointer to memory area to be filled
 * @n - bytes of memory tobe filled,
 * @b - constant byte to fill the memory
 * returns - pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		 s[i] = b;
	}
	return (s);
