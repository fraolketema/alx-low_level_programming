#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - A fun. that prints a sentence before excution
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
