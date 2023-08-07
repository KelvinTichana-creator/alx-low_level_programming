#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints its contents to stdout
 * @filename: Pointer to the name of the text file.
 * @letters: Number of letters to read and print.
 * Return: Number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(letters);
	if (text == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);
	w = write(STDOUT_FILENO, text, let);

	close(file);
	free(text);

	return (w);
}
