#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first nmbr
 * @m: second nmbr
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nbr = 0;
	unsigned long int cur, exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = exc >> i;
		if (cur & 1)
			nbr++;
	}
	return (nbr);
}
