#include "lists.h"

/**
 * print_listint - A function that prints all elements
 * @h: A linked list of type list
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}