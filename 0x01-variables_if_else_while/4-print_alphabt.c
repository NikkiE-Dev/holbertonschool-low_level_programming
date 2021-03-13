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

	a = 97;

	while (a < 123)
	{

		if (a == 101 || a == 113)
		{
			a++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
