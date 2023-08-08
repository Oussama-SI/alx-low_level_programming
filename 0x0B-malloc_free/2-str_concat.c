#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - function to print two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1, len2, t_len;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	t_len = len1 + len2 + 1;

	str = (char *)malloc(t_len * sizeof(char));
	if (str  == NULL)
	{
		return (NULL);
	}

	strcpy(str, s1);
	strcat(str, s2);

	return (str);
}
