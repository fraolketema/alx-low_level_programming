#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A function that adds positive number
 * @argc: Count argument
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int j;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
