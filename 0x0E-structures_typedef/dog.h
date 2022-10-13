#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure to define elements of a dog.
 * @name: first member
 * @age: second element
 * @owner: third element
 *
 * Description: decribing elements of a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
