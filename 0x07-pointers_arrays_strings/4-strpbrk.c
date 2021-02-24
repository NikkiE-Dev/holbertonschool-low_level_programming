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
		if (s[a] != accept[p])
		p++;
		else
			break;
	}
	return ((s + a) - 1);
}
