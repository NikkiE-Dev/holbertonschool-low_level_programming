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
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
