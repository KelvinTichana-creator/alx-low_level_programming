#include "main.h"
#include <stddef.h>
/**
 * _strchr - The funcion
 * @s: The string
 * @c: The character
 * Return: char
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
