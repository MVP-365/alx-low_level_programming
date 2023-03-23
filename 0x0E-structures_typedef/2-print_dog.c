#include <stdio.h>
#include "dog.h"

/**
 * print_dog: print struct dog
 * @d: pointer to structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("NAME: %s\n", d->name);
		else
			printf("NAME: (nil)\n");
		printf("AGE: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("OWNER: %s\n", d->owner);
		else
			printf("OWNER: (nil)\n");
	}
}
