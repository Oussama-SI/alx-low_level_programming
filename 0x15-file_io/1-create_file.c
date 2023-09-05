#include "main.h"
/**
 * create_file - Creates a file
 * @filename: A pointer to the name
 * @text_content: A pointer to a string to write to the file
 * Return: If the function fails or NULL
 */
int create_file(const char *filename, char *text_content)
{
	int ar, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ar = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(ar, text_content, len);

	if (ar == -1 || w == -1)
		return (-1);

	close(ar);

	return (1);
}
