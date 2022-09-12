#include<stdio.h>

/**
 * main - Entry point
 * Desctrption: Prints the alphabet
 *
 *
 *  Return: Always 0 (Success)
 */

	int main(void)

{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
