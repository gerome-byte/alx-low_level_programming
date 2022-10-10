#include "main.h"
#include <string.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int k;
	unsigned int j;
	char *str;

	for (i = 0; s1[i] != '\0'; i++)
		;
	if (s2 == NULL)
		s2 = ("");
	if (n >= strlen(s2))
		n = strlen(s2);
	str = malloc(sizeof(char) * i + n + 1);
	if (!str)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (j = 0; j < n; j++, k++)
		str[k] = s2[j];
	str[k] = '\0';
	return (str);
}
