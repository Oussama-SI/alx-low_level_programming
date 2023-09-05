#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fil;
	ssize_t ar;
	ssize_t w;
	ssize_t t;

	ar = open(filename, O_RDONLY);
	if (ar == -1)
		return (0);
	fil = malloc(sizeof(char) * letters);
	t = read(ar, fil, letters);
	w = write(STDOUT_FILENO, fil, t);

	free(fil);
	close(ar);
	return (w);
}
