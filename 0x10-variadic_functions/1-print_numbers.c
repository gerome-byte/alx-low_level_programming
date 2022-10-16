#include"variadic_functions.h"
#include<stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: test to be printed between the numbers
 * @n: number of arguments
 * Return: nothing
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int x = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);
		printf("%d", x);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	va_end(ap);
	printf("\n");
}
