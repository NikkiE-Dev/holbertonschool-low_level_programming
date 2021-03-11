#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - function that main
 *@argc: Integer
 *@argv: Array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int (*comp)(int, int);

	int i;
	int j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	comp = get_op_func(argv[2]);

	if (comp == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", comp(i, j));

	return (0);
}
