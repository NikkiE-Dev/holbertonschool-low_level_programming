#include "holberton.h"

/**
 * print_alphabet - print the lowercase alphabet
 *
 * Return: No value
 */
void print_alphabet(void)
{
char ch;

for (ch = 97; ch <= 122 ; ch++)
{
_putchar(ch);
}
_putchar('\n');
return;
}
