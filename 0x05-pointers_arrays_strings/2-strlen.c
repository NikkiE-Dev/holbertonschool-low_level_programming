#include "holberton.h"

/**
 * _strlen - check legnth of string.
 * @s: Start of string
 * Return: values
 */
int _strlen(char *s)
{
	int r = 0;

	while (*(s + r) != '\0')
	{
		r++;
	}
	return (r);
}
