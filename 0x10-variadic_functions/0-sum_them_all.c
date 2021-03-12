#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - add all given integers
 * @n: given integer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;
	int sumall;

	sumall = 0;


	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sumall += va_arg(ap, int);
	}
	va_end(ap);
	return (sumall);
}
