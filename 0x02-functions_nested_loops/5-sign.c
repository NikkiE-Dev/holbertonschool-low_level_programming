#include "holberton.h"

/**
 * print_sign -  prints the sign of a number
 * @n: number given to be checked
 * Return: 1 if n is greater than zero
 * Returns 0 if n is zero
 * Returns -1 if n is less than zero
 */
int print_sign(int n)
{
	while (n > 0)
	{
		_putchar('+');
		return (1);
	}
	while (n == 0)
	{
		_putchar('0');
		return (0);
	}
	while (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
