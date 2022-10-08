#include "main.h"

/**
 * *create_array- creates an array of char.
 * @size: size of array.
 * @c: initilized char value.
 * Return: pointer to the arrsy or NULL of it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);


	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
