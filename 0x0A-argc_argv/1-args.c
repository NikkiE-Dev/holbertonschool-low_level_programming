#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: Integer
 * @argv: array
 * Return: Value
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
