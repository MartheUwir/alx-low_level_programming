#include "main.h"

/**
  * print_line - is  function that draws nrew .
  *@n: An input integer
  * new line follows this.
  * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
