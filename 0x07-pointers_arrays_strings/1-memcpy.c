#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @dest: destinnation
 * @src: Source
 * @n: Number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
