#include "main.h"


/**
 * print_alphabet_x10 - Look on main 
 * Description: function uses _putchar function to print
 * lowercase 10 times in alphabet 
 * Return: Null.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
