#include "main.h"

/**
 * *malloc_checked - allocates memory.
 * @b: memory size allocated
 * Return:pointer to the new allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b * sizeof(*str));
	if (!str)
	{
	 	exit(98);
	}
	return (str);
}
