#include <stdio.h>

/**
 * main - A function that prints a number of arguments
 * @argc: Count arguments
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
