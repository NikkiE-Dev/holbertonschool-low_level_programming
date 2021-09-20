#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
*@array: is a pointer to the first element of the array to search in
*@size: the number of elements in array
*@value: the value to search for
* Return: index of value or -1 if value is not found
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}
	return (-1);
}
