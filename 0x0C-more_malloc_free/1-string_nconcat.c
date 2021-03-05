#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - combine s1 & s2
 * @s1: string 1
 * @s2: string 2
 * @n: Amount of bytes in s2
 * Return: Value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
		if (n < b)
			b = n;

	result = malloc((a + b + 1) * sizeof(char));
	if (result == NULL)
		result = (NULL);
	for (c = 0; c < a; c++)
	{
		result[c] = s1[c];
	}
	for (c = a; c < a + b; c++)
	{
		result[c] = s2[c - a];
	}
	result[c] = '\0';
	return (result);
}
