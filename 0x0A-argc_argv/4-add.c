#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: Calculated the amount of arguments
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
		printf("%d\n",  atoi(argv[1]) + atoi(argv[2]));
	}
	return (0);
}
