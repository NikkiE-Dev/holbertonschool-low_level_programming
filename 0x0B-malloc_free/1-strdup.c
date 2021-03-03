#include "holberton.h"
#include <stdlib.h>

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
/**
 * *_strdup- sopying the string to newly allocated space
 *
 * @str: the string
 *
 * Return: Value
 */
char *_strdup(char *str)
{
	char *len;
	char *src = str;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}
	len = malloc(_strlen(str) + 1);
	dest = len;
	if (dest == NULL)
	{
		return (NULL);
	}

	if (src == NULL)
	{
		return (NULL);
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (len);
}
