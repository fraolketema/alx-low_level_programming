#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - It says if an integer is a prime number or not
 * @n: A number to evaluate
 * Return: 1 and 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - It calculates if a number is prime recursively
 * @n: Number to evaluate
 * @i: iterator
 * Return: 1 and 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
