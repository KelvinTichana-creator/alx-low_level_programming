#include "main.h"
/**
 * _strncpy - The function to copy
 * @dest: This is the dest
 * @src: This is the source
 * @n: int
 *Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0' ; b++)
	{
	dest[b] = src[b];
	}
	for (; b  < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
