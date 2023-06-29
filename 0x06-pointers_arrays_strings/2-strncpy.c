#include "main.h"
/**
 * _strncpy - copy strings, defining the size of second string.
 * @dest: string1
 * @src: string2
 * @n: size of second string
 * Return: Char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
