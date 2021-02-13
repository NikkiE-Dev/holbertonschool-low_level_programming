#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 *
 * @c: int type letter
 *
 * Return: 0 if lowercase 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);

	else
		return (0);
}

