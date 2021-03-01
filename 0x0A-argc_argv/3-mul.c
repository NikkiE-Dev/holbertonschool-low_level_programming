#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - multiplies the given numbers
 * @argc: Integer
 * @argv: array
 * Return: Value
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
