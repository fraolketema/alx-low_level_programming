#include "main.h"

/**
 * _strdup - A function that copies string to newly allocated space
 * @str: A string to copy to new memory
 * Return: A pointer to new memory
 */

char *_strdup(char *str)

{
	char *copy;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}
