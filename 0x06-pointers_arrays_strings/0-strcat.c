#include "main.h"

/**
 * char *_strcat - concatenates two strings
 * @src - first string
 * @dest - second string
 * return: dest
 */

void char *_strcat(char *dest, char *src)

{

	int i;
	int j;

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
	       i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];

		j++;
		i++;
	}
	dest[i] = '\0';

	return dest;
}
