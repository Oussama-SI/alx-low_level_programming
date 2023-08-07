#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * _strdup - function to print an array of string
 * @str: the string element
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *tab;

	len = strlen(str);
	tab = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < len ; i++)
	{
		strcpy(tab, str);
	}
	if (tab == NULL)
		return (NULL);

	return (tab);
	free(tab);
}
