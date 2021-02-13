#include "holberton.h"

/**
 * print_line - pints a line based off number of n
 *
 * @n: number of time the line prints
 *
 * Return: No value.
 */
void print_line(int n)
{

	int b;

	if (n > 0)
	{
		for (b = 1; b <= n; b++)
			_putchar('_');
	}
	_putchar('\n');
}
