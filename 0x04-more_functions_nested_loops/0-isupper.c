#include "main.h"

/**
 * _isupper - A function that checks if uppercse character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 either
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
