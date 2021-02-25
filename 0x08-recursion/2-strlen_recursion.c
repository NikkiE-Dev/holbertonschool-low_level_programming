#include "holberton.h"

/**
 * _strlen_recursion - counts the legnth of a string
 *@s: the string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
