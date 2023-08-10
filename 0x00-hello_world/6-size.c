#include <stdio.h>
/**
 * main - Size is not grandeur
 *
 * Return: 0 success
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("size of int: %lu byte(s)\n", sizeof(b));
printf("size of a long int: %lu byte(s)\n", sizeof(c));
printf("size of long long int: %lu byte(s)\n", sizeof(d));
printf("size of a float: %lu byte(s)\n", sizeof(e));
return (0);
}
