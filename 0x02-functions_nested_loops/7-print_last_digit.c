#include "main.h"


/**
 * print_last_digit - Check main
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number k
 */
int print_last_digit(int k)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
