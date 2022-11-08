#include"main.h"
/**
 * read_textfile - reads and prints textfile to the standard output.
 * @filename: name of the file.
 * @letters: number of letters it should read and print.
 * Return: number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t x, y;
	char *data;

	data = malloc(sizeof(char) * letters);
	if (!data)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (filename == NULL)
		return (0);
	x = read(fd, data, letters);
	y = write(2, data, x);
	close(fd);
	return (y);
}



