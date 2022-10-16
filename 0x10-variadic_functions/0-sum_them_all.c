#include "variadic_functions.h"

/**
 * sum_them_all - sum of all variadic arguments.
 * @n: number of arguments.
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	var_list ap;

	var_start(ap, n);

	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += var_arg(ap, int);
	var_end(ap);
	return (sum);
}
