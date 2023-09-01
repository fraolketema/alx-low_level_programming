#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: Area filled with bytes
 * @b: Constant byte
 * @n:number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
