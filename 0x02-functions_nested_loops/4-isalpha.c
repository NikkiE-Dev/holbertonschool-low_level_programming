#include "holberton.h"

/**
 * _isalpha - verify if it an alphabet character
 * @c: Value
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
