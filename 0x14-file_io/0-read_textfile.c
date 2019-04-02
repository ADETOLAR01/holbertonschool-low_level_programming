#include "holberton.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file_descriptor */
	ssize_t bytes;
	char *buf[READ_BUF_SIZE];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, buf, letters);
	bytes = write(STDOUT_FILENO, buf, bytes);
	close(fd);
	return (bytes);
}