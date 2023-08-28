#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - restract a memory block using malloc
 * @ptr: pointer to the memory
 * @old_size: size of the allocated
 * @new_size: new size
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;
	char *l_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	n_ptr = malloc(new_size);
	if (!n_ptr)
		return (NULL);

	l_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			n_ptr[i] = l_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			n_ptr[i] = l_ptr[i];
	}

	free(ptr);
	return (n_ptr);
}

