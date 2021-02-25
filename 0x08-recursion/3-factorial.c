#include "holberton.h"

/**
 * factorial - mathmatical formula
 *@n: integer
 * Return: solution
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	{
		if (n == 0)
			return (1);
		else
		return (n * factorial(n - 1));
	}
}
