#include <stdio.h>

/**
 * main - Prints out the size of data types in c
 *
 * Return: 0
 */

(
int main(void)

	int a;
	float b;
	double c;
	char d;

	printf("size of int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("size of float: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of double: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of char: %lu byte(s)\n", (unsigned long) sizeof(d));

	return (0);
}
