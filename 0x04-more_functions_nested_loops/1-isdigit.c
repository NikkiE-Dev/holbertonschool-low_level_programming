#include "holberton.h"

/**
 * _isdigit - do display a code if output is a digit
 *
 * @c: int type digit
 *
 * Return: 1 if digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);

	else
		return (0);
}

