#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates array of integers
 * @min: min no. in array
 * @max: Max no. in array
 * Return: New memory
 */

int *array_range(int min, int max)
{
	int *output;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
		if (output == NULL)
			return (NULL);
	for (i = 0; min <= max; i++)
		output[i] = min++;
	return (output);

}
