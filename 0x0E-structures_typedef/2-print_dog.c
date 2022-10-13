#include"dog.h"
#include<stdio.h>

/**
 * print_dog - prints dog.
 * @d: pointer to struct.
 * Return: nothing.
 */

void print_dog(struct dog *d)

{
	printf("\n%s \n%d \n%s", d->name, d->age, d->owner);
	if (d == NULL)
		print("");
	if (d->name == NULL)
		printf("nil\n");
	if (d->age == NULL)
		printf("nil\n");
	if (d->owner == NULL)
		printf("nil\n");
}
