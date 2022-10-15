#include "function_pointers.h"

/**
 * array_iterator - executes another function
 * @array: array given
 * @size:size of the array
 * @action: pointer to a function.
 * Return: nohing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	for (i = 0; i < size; i++)
		action(array[i]);
}
