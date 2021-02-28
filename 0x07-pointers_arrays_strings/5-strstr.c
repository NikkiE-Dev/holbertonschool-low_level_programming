#include "holberton.h"

/**
 * _strstr - finds 1st time a character in s1 matches character in s2
 *@haystack: s1
 *@needle: s2
 * Return: Values
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int p = 0;

	for (p = 0; needle[p] != '\0'; p++)
	{
		for (a = 0; haystack[a] != '\0'; a++)

			if (needle[p] != haystack[a])
				continue;
			else
				return (&needle[p]);
	}
	return ('\0');
}
