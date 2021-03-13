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

	a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
