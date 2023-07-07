#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: This is destination
 * @src: This is the source
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
