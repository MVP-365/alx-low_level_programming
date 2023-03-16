#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: 1 on success;
 * on error, return -1 and set errno appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
