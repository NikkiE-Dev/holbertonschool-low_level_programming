#include "holberton.h"

/**
 * char *_strncat - append the src string to the dest string,
 * @src: Varuable
 * @dest: Variable
 * @n: Interger
 * Return: value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x;


	while (dest[i] != '\0')
		i++;
	for (x = 0; src[x] != '\0' && n > x; x++)
		dest[i + x] = src[x];

	return (dest);

}
