#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_unit - transfrm binary to decimal
 * @b: the string binary
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nbr = 0;
	unsigned int pwr = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i--; i >= 0; i--)
	{
		if (b[i] == '1')
			nbr += pwr;
		pwr *= 2;
	}

	return (nbr);
}
