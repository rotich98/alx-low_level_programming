#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *fd;

	if (filename == NULL)
		return (0);

	fd = malloc(sizeof(char) * letters);
	if (fd == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, fd, letters);
	wr = write(STDOUT_FILENO, fd, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(fd);
		return (0);
	}

	free(fd);
	close(op);

	return (wr);
}
