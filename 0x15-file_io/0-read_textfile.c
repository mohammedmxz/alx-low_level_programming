#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints to POSIX stdout.
 * @filename: Pointer to file name.
 * @letters: Number of letters to read and print.
 *
 * Return: 0 on failure or if filename is NULL,
 *         otherwise, the actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
