#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Value
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *f;

	f = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	x = 0;

	while (x < size)
	{
		f[x] = c;
		x++;
	}
	f[x] = '\0';
	return (f);
}
