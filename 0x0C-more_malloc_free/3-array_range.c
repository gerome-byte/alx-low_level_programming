#include "main.h"
 /**
  * array_range - Creates an array of integers
  * @min: min integer
  * @max:max integer.
  * Return: pointer to the newly created array.
  */

int *array_range(int min, int max)
{
	int i;
	int *s;
	int len = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		len++;
	s = malloc(sizeof(int) * len);

	if (!s)
		return (NULL);
	i = 0;
	while( min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}
