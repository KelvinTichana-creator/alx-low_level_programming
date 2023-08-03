#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	union {
		unsigned int num;
		unsigned char c;
	} endian;
	endian.num = 1;
	return (endian.c);
}
