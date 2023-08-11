#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function to concate two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in second string
 *
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr, *x;
	unsigned int i, a1, a2;

	a1 = strlen(s1);
	a2 = strlen(s2);

	arr = malloc(sizeof(char) * (a1 + n + 1));
		if (arr == NULL)
			return (NULL);

	strcpy(arr, s1);

	x = malloc(sizeof(char) * n);
	
	for (i = 0 ; i < n ; i++)
		x[i] = s2[i];

	if (x == NULL || n >= a2)
		strcat(arr, s2);
	else
		strcat(arr, x);

	return (arr);
	free(arr);
}
