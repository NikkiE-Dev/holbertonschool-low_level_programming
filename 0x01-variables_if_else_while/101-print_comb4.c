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
	int c;

	a = 48;
	b = 48;
	c = 48;


	while (a <= 55)
	{

		while (b <= 57)
		{
			while (c <= 57)
			{
				if (b > a && c > b)

				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a < 55 || b < 56 || c < 57)
					{
					putchar(',');
					putchar(' ');
					}
				}
				c++;
			}
			b++;
			c = 48;
		}
		a++;
		b = 48;
		c = 48;
	}

	putchar('\n');
	return (0);
}
