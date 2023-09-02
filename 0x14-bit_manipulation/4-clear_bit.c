#include "main.h"

/**
 * clear_bit - sets the value of n
 * @n: pointer to the number
 * @index: index of the bit
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
