#include "main.h"

/**
 * get_endianness - Checks if a machine is a  little or big endian
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

