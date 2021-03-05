#include "holberton.h"
#include <stdlib.h>


/**
 * malloc_checked - checked to see if there is sufficient memmory
 * @b: Integer
 * Return: Value
 */
void *malloc_checked(unsigned int b)
{

	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
