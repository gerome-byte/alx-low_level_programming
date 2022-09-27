#include "main.h"

/**
 * _strspn - seraches a string fir a set of bytes
 * @s: string to be searched.
 * @accept: concists of bytes to be compared with the string s.
 * Return: the number of bytes in the intitial segment s similar to those from
 * accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		break;
		}
		if (s[j] == '\0')
			return (count);
	}

	return (count);
}
