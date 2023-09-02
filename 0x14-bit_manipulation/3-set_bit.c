#include <stdlib.h>
#include "main.h"
/**
 * set_bit - Set the value of the bit
 * @n: Pointer to the number
 * @index: index of the bit
 *
 * Return: NULL or result
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);
	return (1);
}
