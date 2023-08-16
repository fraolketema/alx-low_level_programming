#include "main.h"

/**
<<<<<<< HEAD
 * times_table - A function that prints 9 times table, staritng with 0
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');

		for (column = 1; column < 10; column++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * column;

			if (product < 10)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
=======
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

>>>>>>> 3d30e0659ac1f8467348f9f2507b23e6f05fd038
}
