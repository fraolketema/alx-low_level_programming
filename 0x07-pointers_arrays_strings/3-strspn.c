#include "main.h"

/**
 * _strspn - The function that gets the length of a prefix substring.
 * @s: string to search from
 * @accept: string to search
 * Return: Number of characters
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
