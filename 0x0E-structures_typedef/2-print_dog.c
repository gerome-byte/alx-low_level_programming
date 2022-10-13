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
		printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);

		if (d->name == NULL)
			printf("Name: (nil)\n");
		if (!d->age)
			printf("Age: (nil)\n");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
	}
}
