#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: the string to print
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
    putchar('\n');
}