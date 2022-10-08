#include "main.h"

/**
 * *_strdup - duplicates a string.
 * @str: string to be duplicated.
 * Return:pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	for (j = 0; str[j] != '\0'; j++)
		;
	ptr = malloc(sizeof(char) * j + 1);
	

	if (str == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ptr[i] = str[i];
	return (ptr);
}
