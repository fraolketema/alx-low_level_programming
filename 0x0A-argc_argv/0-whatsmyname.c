#include <stdio.h>

/**
 *main - A function that prints a program name
 *@argc: count argument
 *@argv: argument vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
