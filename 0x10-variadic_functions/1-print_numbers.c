#include "variadic_functions.h"
#include <stdio.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints all given integers
 * @separator: string to be printed between numbers
 * @n: given integer
 * Return: string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;


	va_start(ap, n);
	for (i = 0; i < n; i++)
	{

		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");

}
