#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - prints if an integer is positive or negative
 * @n: the integer to check
 */
void positive_or_negative(int n)
{
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("0 is neither positive nor negative\n");
}

/**
 * main - tests the positive_or_negative function
 * Return: 0
 */
int main(void)
{
    int i;

    i = 98;
    positive_or_negative(i);

    return 0;
}
