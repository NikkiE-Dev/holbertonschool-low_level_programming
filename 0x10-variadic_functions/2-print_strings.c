#include "variadic_functions.h"
#include <stdio.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints all given string
 * @separator: string to be printed between numbers
 * @n: given integer
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
			if (ptr == NULL)
				ptr = "(nil)";
		if (separator != NULL)
		{

		if (i < n - 1)
			printf("%s%s", ptr, separator);
		else
			printf("%s", ptr);
		}
		else
			printf("%s", ptr);
	}
	va_end(ap);
	printf("\n");

}
