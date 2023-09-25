#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the node
 * at a certain index in a linked list
 * @head: First node in the linked list
 * @index: An index of the node to retur
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
