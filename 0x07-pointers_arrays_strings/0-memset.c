#include "holberton.h"

/**
 * _memset - memory slot to be filled
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: integer
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;

	while (x < n)
	{

		*(s + x) = b;
		x++;
	}
	return (s);
}
