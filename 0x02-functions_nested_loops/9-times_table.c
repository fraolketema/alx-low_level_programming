#include "main.h"

/**
 * times_table - A function that prints the 9 times table
 *
 * Return: 0
 */

void times_table(void)

{
	int i, j, p;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			p = i * j;
			if (p >= 10)
			{
				_putchar('0' + p / 10);
				_putchar('0' + p % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + p);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}

}
