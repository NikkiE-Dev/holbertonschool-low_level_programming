#include "holberton.h"

/**
 * clear_bit - Changing the value in the binary format to 0
 *@n: pointer
 *@index: position in the binary format
 * Return: Value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*This satisfies edge case if number is over 64 would return error*/
	if (index > 63)
	{
		return (-1);
	}
/*This is setting the value at this position to 0*/
	*n &= ~(1 << index);
		return (1);

}
