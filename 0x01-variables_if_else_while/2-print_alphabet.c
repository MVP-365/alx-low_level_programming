#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	putchar(A);
	putchar('\n');
	return(0);
}
