#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array
 * @a: pointer that has an address
 * @n: numbers
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;

	}
}
