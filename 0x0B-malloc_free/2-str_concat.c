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
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	str = malloc(sizeof(char) * i + j + 1);

	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];
	l = j;

	for (j = 0; j < l; j++)
		str[k] = s2[j];

	return (str);
}
