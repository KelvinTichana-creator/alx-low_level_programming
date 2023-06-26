#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: void (nothing)
 */
void rev_string(char *s)
{
	char var;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		var = s[i];
		s[i] = s[len1];
		s[len1--] = var;
	}
}
