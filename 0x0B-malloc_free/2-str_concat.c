#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory,
 * holds contents of S1 followed by the contents of S2,
 * gives NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, str1, str2, len;
	char *result;

	str1 = str2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			str1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			str2++;
	}

	len = str1 + str2;
	result = (char *)malloc(sizeof(char) * (len + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < str1; i++)
		result[i] = s1[i];

	for (j = 0; j < str2; j++)
	{
		i++;
		result[i] = s2[j];
	result[len] = '\0';
	}
	return (result);
}
