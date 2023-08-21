#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: A string to be counted
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0' ; i++)
		count++;
	return (count);
}
