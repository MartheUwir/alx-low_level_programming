#include "main.h"

/**
 * _isupper - is defined in main to check fo ruppercase char.
 * @c: A characted inputed
 * Return: 1 for success and 0 for failure 
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
