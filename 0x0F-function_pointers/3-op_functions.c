#include "3-calc.h"

/**
 * op_add - adds 2 integers.
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 integers.
 * @a: first integer
 * @b: second integer
 * Return: the result of a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers.
 * @a: first integer
 * @b: second integer
 * Return: the result of a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers.
 * @a: first integer
 * @b: second integer
 * Return: the result of a/b.
 */
int op_div(int a, int b)
{
	if  (b == 0)
	{
		printf("error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - divides 2 integers and returns their remainder.
 * @a: first integer
 * @b: second integer
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if  (b == 0)
	{
		printf("error\n");
		exit(100);
	}

	return (a % b);
}
