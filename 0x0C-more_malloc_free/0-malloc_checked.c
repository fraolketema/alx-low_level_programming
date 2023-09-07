#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: memory size
 * Return: A pointer to new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
