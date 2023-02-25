#include "main.h"

/**
 * print_numbers - is a function that prints numbers from 0to  9.
 * it is followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
