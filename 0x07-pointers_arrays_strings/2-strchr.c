#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: string to searching
 * @c: Character for searching s
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
