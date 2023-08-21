#include "main.h"

/**
 * print_rev - A function that prints a string
 * @s: A string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count - 1 ; s[i] >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
