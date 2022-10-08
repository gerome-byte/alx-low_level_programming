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

	str = malloc(sizeof(char) * size);
	str[size] = c;

	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	else
		return (str);
}
