#include "3-calc.h"
#include "3-op_functions.c"

/**
 * get_op_func - pointer to a function
 * @s: operator passed as argument to the program.
 * Return: pointer to the function that corresponds to the operator
 * given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
			};
	int i
		while (i < 10)
		{
			if (s[0] == ops->op[i])
				break;
			i++;
		}
	return (ops[i / 2].f);
}
