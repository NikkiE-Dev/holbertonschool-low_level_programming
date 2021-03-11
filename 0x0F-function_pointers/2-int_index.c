#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - copmares elements
 * @array: array
 * @size: size of array
 * @cmp: pointer function
 * Return: Integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
		}
	}
	return (-1);
}
