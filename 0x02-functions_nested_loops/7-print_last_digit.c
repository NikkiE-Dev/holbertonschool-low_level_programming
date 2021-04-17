#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number given to test
 * Return: value of j
 */
int print_last_digit(int n)
{
	char j;

	j = n % 10;
	if (j < 0)
	{
		j = j * -1;
		_putchar(j + '0');
	}
	else
		_putchar(j + '0');
	return (j);
}
