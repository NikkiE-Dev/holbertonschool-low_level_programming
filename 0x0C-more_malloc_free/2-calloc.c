#include "holberton.h"
#include <stdlib.h>


/**
 * _calloc - checked to see if there is sufficient memmory
 * @nmemb: Integer
 * @size: Integer
 * Return: Value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int a;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb * size; a++)
	{
		ptr[a] = '\0';
	}
	return (ptr);
}
