#include "main.h"

/**
 * create_array - A function that creates an array
 * @size: Size of an array
 * @c: A character to store in array
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return  (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);

}

