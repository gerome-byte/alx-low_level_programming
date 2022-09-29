#include "main.h"

/**
 * _puts_recursion - prints a string on the stdouput.
 * @s: the string to be printed.
 * Return: nothing.
 */

void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
