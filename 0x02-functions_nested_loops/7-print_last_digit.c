#include "main.h"


/**
 * print_last_digit - Check main
 * @r: An integer input
 * Description: This function prints the last digit of k number
 * Return: last digit of number k
 */
int print_last_digit(int k)
{
	int n;

	if (r < 0)
		n = -1 * (k % 10);
	else
		n = k % 10;

	_putchar((k % 10) + '0');
	return (k % 10);
}
