#include "holberton.h"

/**
 * _memcpy - memory slot to be copied
 * @dest: the address of memory to placed
 * @src: the size of the memory to pulled
 * @n: integer
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;

	while (x < n)
	{

		*(dest + x) = *(src + x);
		x++;
	}

	return (dest);
}
