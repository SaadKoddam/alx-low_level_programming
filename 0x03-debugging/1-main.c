#include <stdio.h>

/**
 * main - avoids an infinite loop
 * Return: 0
 */

int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    while (i < 10)
    {
        printf("%d", i); // Use printf() to print the value of i
        i++; // Increment the value of i to avoid infinite loop
    }

    printf("\nInfinite loop avoided! \\o/\n");

    return (0);
}
