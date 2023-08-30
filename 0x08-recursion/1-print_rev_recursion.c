#include "main.h"

/**
 * _print_rev_recursion - A function print strings in reverse
 * @s : A string to be reversed
 */

void _print_rev_recursion(char *s)
{
	if  (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
