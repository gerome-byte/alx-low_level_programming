#include"dog.h"
#include<stdio.h>

/**
 * print_dog - prints dog.
 * @d: pointer to struct.
 * Return: nothing.
 */

void print_dog(struct dog *d)

{
	if (d)
	{
		printf("\n%s \n%f \n%s\n", d->name, d->age, d->owner);

		if (d->name == NULL)
			printf("nil\n");
		if (!d->name)
			printf("nil\n");
		if (d->owner == NULL)
			printf("nil\n");
	}
}
