#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function to request memory
 * @b: the element that malloc request to
 *
 * Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	void *uid;

	uid = malloc(sizeof(b));

	if (uid == NULL)
		exit(98);

	return (uid);
}
