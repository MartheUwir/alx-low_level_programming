#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates passwords randomly
 * generates 11 passwords
 *
 * Return: Always 0
 */
int main(void)
{
    int pass[11];
    int i, sum, n;

    sum = 0;
    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        pass[i] = rand() % 10;
        sum += pass[i];
        putchar(pass[i] + '0');
    }

    pass[10] = 2772 - sum;
    putchar(pass[10] + '0');

    return (0);
}




