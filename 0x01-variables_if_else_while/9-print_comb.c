#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints numbers followed by comma
 * Return: 0
 *
 */
int main(void)
{
	int a;

	a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a <= 56)
		{
		putchar(',');
		putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
