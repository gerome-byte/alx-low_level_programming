#include "main.h"

/**
 * *_strchr - points to the first occurence of a character in a string.
 * @s: string where character is to be found.
 * @c: character to be found.
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}


	return ('\0');
}
