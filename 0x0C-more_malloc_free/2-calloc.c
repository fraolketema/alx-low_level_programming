#include "main.h"
#include <stdlib.h>

/**
 * _calloc - It allocates memory for an array
 * @nmemb: No. of array
 * @size: size of an array
 * Return: A pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
