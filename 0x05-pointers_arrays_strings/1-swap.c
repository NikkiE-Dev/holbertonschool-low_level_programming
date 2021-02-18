#include "holberton.h"

/**
 * swap_int - swapping integer values
 * @a: initial value
 * @b: secondary value
 * Return: a value
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}
