#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates array in range
 * @min: starting number in array
 * @max: ending number in array
 *
 * Return: Value
 */
int *array_range(int min, int max)
{

	int a;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++, min++)
	{
		ptr[a] = min;
	}
	return (ptr);
}
