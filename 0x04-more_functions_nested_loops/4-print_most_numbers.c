#include "main.h"

/**
 * print_most_numbers - is a function that prints the numbers from 0 to 9.
  * it is followed by a new line.
 * two and four are excluded
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
