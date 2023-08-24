#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: String destination
 * @src: String source
 * @n: Number of bytes that concatenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	len1 = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len1 + i] = *src;
		src++;
	}
	dest[len1 + i] = '\0';
	return (dest);
}
