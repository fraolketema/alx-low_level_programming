#include "main.h"

/**
 * _strcat - A function that concatenates two string
 * @dest: Destination
 * @src: Source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = 0;
	len2 = 0;

	for (i = 0; dest[i] != '\0' ; i++)
		len1++;
	for (i = 0; src[i] != '\0' ; i++)
		len2++;

	for (i = 0; i <= len2 ; i++)
		dest[len1 + i] = src[i];
	return (dest);
}
