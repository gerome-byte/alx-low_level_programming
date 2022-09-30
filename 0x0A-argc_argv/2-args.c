#include<stdio.h>
#include<stdlib.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints arguments
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
