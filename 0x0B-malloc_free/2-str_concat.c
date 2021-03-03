#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - combine s1 & s2
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Value
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	int c;
	char *result;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	result = malloc((a + b + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
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
