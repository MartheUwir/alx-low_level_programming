#include <unistd.h>

/**
 * _putchar - writes c character to stdout
 *
 * Return: if function compiles well 1.
 * when there is error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
