#include "main.h"

/**
 * _islower - A function that returns 1  if c is lowercase
 * @c: parameter to be checked
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
