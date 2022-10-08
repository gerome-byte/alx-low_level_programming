#include "main.h"

/**
 * *str_concat - combine two strings together.
 * @s1: destination string.
 * @s2: source string.
 * Return: pointer to the new string.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k;

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = ('\0');

	return (s1);

	str = malloc(typeof(char) * i);

	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	return (str);
}
