#include "holberton.h"

/**
 * print_alphabet_x10 - print the lowercase alphabet 10 times
 *
 * Return: No value
 */
void print_alphabet_x10(void)
{
char ch;
int y;

for (y = 1; y <= 10; y++)
{
for (ch = 97; ch <= 122 ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
return;
}
