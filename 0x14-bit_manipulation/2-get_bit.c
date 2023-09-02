#include <stdlib.h>
#include "main.h"
/**
 * get_bit - Get the value of a bit
 * @n: The number to index
 * @index: The index of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
