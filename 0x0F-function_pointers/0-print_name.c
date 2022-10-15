#include"function_pointers.h"

/**
 * print_name - prints the name.
 * @name: name given
 * @f: pointer to a funtion.
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
