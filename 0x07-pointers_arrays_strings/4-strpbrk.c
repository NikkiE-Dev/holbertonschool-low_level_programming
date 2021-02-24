#include "holberton.h"

/**
 * _strpbrk - finds 1st time a character in s1 matches character in s2
 *@s: s1
 *@accept: s2
 *
 *
 * Return: Values
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int p = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (p = 0; accept[p] != '\0'; p++)

			if (accept[p] != s[a])
				continue;
			else
				return (&s[a]);
	}
	return ('\0');
}
