#include "search_algos.h"

/**
* binary_search - searches for a value in an array of integers
*@array: is a pointer to the first element of the array to search in
*@size: the number of elements in array
*@value: the value to search for
* Return: index of value or -1 if value is not found
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int a = 0, b = size - 1, c, d;

	if (array == NULL)
		return (-1);

	while (a <= b)
	{
		c = (a + b) / 2;
		printf("Searching in array: ");

		for (d = a; d < b; d++)
			printf("%d, ", array[d]);
			printf("%d\n", array[d]);
		if (array[c] < value)
			a = c + 1;
		else if (array[c] > value)
			b = c - 1;
		else
			return (c);
	}
	return (-1);
}
