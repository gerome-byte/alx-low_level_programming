#include"dog.h"

/**
 * init_dog - iniitializes elements of struct.
 * @b: adress of struct elements
 * @name: name of dog
 * @age: age of dog.
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
