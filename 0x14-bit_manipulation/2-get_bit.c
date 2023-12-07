#include "main.h"

/**
 * get_bit -A func returns the value of a bit at an index in a decimal no
 * @n: numb to search
 * @index: index of a bit
 * Return: A value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
