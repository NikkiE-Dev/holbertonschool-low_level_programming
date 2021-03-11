#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function for given elements
 * @array: elements in the array
 * @size: size of the array
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && size && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
