#include "main.h"

/**
 * print_array - A function that prints n elements of an array
 * @a: An array to be used
 * @n: Number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
