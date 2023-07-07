#include "main.h"

/**
 * *_memcpy - The funcion to copy Src to dest
 * @dest: This is the result
 * @src: This is the target string
 * @n: This is n, number bytes to copy
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	char *pDst = dest;
	char const *pSrc =  src;

	for (a = 0; a < n; a++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}
