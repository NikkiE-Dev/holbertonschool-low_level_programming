#include "holberton.h"

/**
 * _puts - print string
 *@str: string to be printed
 * Return: value
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
