#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - display if given element is negative or positive
 * Return: 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d %s", n, "is zero");
	}
	if (n < 0)
	{
		printf("%d %s", n, "is negative");
	}
	if (n > 0)
	{
		printf("%d %s", n, "is positive");
	}
	printf("\n");
	return (0);
}
