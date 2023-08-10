#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int b)
{
	void *uid;

	uid = malloc(sizeof(b));

	if (uid == NULL)
		exit(98);

	return (uid);
}
