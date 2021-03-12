#include "variadic_functions.h"

/**
 * print_all - prints given elements
 * @format: given elements
 *Return: Values
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *ptr;

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			ptr = va_arg(list, char*);
			if (ptr == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", ptr);
			break;
		}
		i++;
		if (format[i] != '\0' && (format[i - 1] == 'c' ||
					  format[i - 1] == 'i' ||
					  format[i - 1] == 'f' ||
					  format[i - 1] == 's'))
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(list);
}
