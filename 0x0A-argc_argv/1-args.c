#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: array of arguments.
 * Return: 0
 */

int main(int argc, char *argv[])

{

	int i = 0;
	int j = 2;

	if (i > j)
	{
		printf("%s\n", argv[0]);
	}

	else
		printf("%d\n", argc);
	return (0);
}
