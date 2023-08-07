#include "main.h"

/**
 * read_textfile - reads a text file and prints contents the POSIX stdout.
 * @filename: the file to open.
 * @letters: number of letters it should read and print.
 * Return: number of letters it could read and print, or 0 if:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = -1;
	ssize_t output = 0;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	output = read(file_descriptor, buffer, letters);
	if (output < 0)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	output = write(STDOUT_FILENO, buffer, output);
	free(buffer);
	close(file_descriptor);
	if (output < 0)
		return (0);
	return (output);
}
