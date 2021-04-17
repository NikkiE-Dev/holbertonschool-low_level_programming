#include "holberton.h"

/**
 * jack_bauer - Timer being printed
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h;
	int hh;
	int mm;
	int m;

	for (h = 0; h < 3; h++)
	{
		for (hh = 0; hh < 4; hh++)
		{
			for (m = 0; m < 6; m++)
			{
				for (mm = 0; mm < 10; mm++)
				{
				_putchar(h + '0');
				_putchar(hh + '0');
				_putchar(':');
				_putchar(m + '0');
				_putchar(mm + '0');
				_putchar('\n');
				}
			}
		}
	}
}
