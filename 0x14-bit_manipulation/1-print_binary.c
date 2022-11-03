#include"main.c"
/**
 * print_binary - prints binary rep of digits.
 * @n: digit to be converted to binary.
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned int i = 31;
	unsigned int mask;

	for (; i >= 0; i--)
	{
		mask = (1 << i);
		if (n & mask)
			printf("1");
		else
			printf("0");
	}
}

