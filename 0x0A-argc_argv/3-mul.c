#include<stdio.h>
#include<stdlib.h>

/**
 * main - mulitiplies two numbers
 * @argc: counts arguments
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{


	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
