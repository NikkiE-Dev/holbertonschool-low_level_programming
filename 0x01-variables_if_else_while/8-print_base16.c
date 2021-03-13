#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabet
 * Return: 0
 *
 */
int main(void)
{
	int a;
	int b;

	a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}

	b = 97;

	while (b < 103)
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
