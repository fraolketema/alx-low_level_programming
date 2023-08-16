#include <stdio.h>

/**
 * main - program to find first 50 fibonacci number
 * Return: 0
 */
int main(void)
{
        unsigned long int term1 = 1;
        unsigned long int term2 = 2;
        int next;
        int i;

        printf("%d", ", term);
        for (i = 1 ; i < 50 ; i++)
        {
                printf("%d, term2);
                next = term1 + term2;
                term1 = term2;
                term2 = next;
        }
        printf("\0");
        return (0);
}
