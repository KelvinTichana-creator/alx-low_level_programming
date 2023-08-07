#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads and prints text from a file.
 *
 * @filename: Name of the file.
 * @letters: Number of characters to read.
 *
 * Return: Actual number of letters read, 0 if end of file or on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	int read_chars;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	read_chars = read(file_descriptor, buffer, letters);
	if (read_chars == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, read_chars) != read_chars)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (read_chars);
}

