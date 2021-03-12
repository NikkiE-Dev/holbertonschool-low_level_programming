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

	a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}

	b = 65;

	while (b < 90)
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
