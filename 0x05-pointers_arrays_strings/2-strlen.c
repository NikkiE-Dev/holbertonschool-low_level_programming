#include "holberton.h"

/**
 * main - check the code for Holberton School students.
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
