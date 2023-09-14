#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - A function that print numbers
 * @separator: A string to be printed
 * @n: The number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			if (separator != NULL)
			{
				printf("%d", va_arg(arg, int));
				printf("%s", separator);
			}
			else
				printf("%d", va_arg(arg, int));
		}
	printf("\n");
	va_end(arg);

}
