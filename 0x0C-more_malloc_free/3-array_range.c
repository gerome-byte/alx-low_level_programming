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

	if (min > max)
		return (NULL);
	for (i = min; i <= max)
		i++;
	s = mallloc(i);

	if (!s)
		return (NULL);
	return (s);
}
