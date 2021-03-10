#include <stdio.h>

/**
 * main - copy name of program compiled with
 *@argc: Integer
 *@argv: char
 * Return:Program name
 */

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	printf(" %s\n", __FILE__);

	return (0);
}
