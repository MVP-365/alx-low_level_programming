#include "dog.h"

/**
 * init_dog: initializes a structure of dog type
 * @d: pointer to struct dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 * Return: void
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
