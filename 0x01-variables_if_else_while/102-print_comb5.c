#include <stdio.h>

/**
 * main - print comb5
 *
 * Return: always 0
 */

int main(void)
{
int tens1, ones1, tens2, ones2;
int firstcombination = 1;

for (tens1 = 0; tens1 < 10; tens1++)
{
for (ones1 = 0; ones1 < 10; ones1++)
{
for (tens2 = 0; tens2 < 10; tens2++)
{
for (ones2 = 0; ones2 < 10; ones2++)
{
if (tens1 * 10 + ones1 <= tens2 * 10 + ones2)
{
if (tens1 * 10 + ones1 < tens2 * 10 + ones2)
{
if (!firstcombination)
{
putchar(',');
putchar(' ');
}
putchar(tens1 + '0');
putchar(ones1 + '0');
putchar(' ');
putchar(tens2 + '0');
putchar(ones2 + '0');
firstcombination = 0;
}
}
}
}
}
}
putchar('\n');
return (0);
}
