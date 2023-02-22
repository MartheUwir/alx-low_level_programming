#include "main.h"

/**
 * print_alphabet - read codes
 * Description: functions that prints alphabet in lowercase and a new line
 * Return: Null.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
