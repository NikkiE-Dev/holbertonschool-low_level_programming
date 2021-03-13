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
	int b;

	a = 48;
	b = 48;


	while (a <= 57)
	{

		while (b <= 57)
		{
			if (b > a)

			{
				putchar(a);
				putchar(b);
				if (a < 56 || b < 57)
				{
					putchar(',');
					putchar(' ');
				}

			}
			b++;

		}
		a++;
		b = 48;
	}

	putchar('\n');
	return (0);
}
