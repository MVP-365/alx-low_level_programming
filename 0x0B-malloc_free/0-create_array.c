#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 * Return: a pointer to the array, or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	Null = 0;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == 0)
		return (Null);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
