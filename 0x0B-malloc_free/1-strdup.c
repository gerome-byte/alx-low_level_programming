#include "main.h"

/**
 * *_strdup - duplicates a string.
 * @str: string to be duplicated.
 * Return:pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(*str));

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
