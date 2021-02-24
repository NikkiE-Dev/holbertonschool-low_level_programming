#include "holberton.h"

/**
 * _strspn - legnth of a prefix in the string
 *@s: string
 *@accept: charcter in string
 * Return: Values
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int b;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; accept[b] != s[i]; b++)
		{
			if (accept[b] == '\0')
				return (i);
		}
	}
	return (i);
}
