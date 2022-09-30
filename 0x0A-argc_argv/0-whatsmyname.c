#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the programs name
 * @argc: argument count
 * @argv: array of strings
 * Return: 0
 */


int main(int argc, char *argv[])

{
	int i;

		for (i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

		return (0);
}
