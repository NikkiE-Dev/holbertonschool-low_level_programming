#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - add all given digits
 * @argc: Calculated the amount of arguments
 * @argv: array
 * Return: Value
 */
int main(int argc, char *argv[])
{
	int x, s, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (s = 0; argv[x][s]; s++)
		{
			if (!(argv[x][s] >= '0' && argv[x][s] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
