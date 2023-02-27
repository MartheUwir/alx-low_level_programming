#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: the string to print
 */
void _puts(char *str)
{
    if (str == NULL)
        return;

    printf("%s\n", str);
}
