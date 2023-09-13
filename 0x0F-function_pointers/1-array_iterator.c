#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function on each element of array
 * @array: The array
 * @size: an array of size
 * @action: A function to perform on each element of an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
