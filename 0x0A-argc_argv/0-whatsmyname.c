#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * @argc: the number of arguments passed to the program (unused)
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv); /* print the first argument (the program name) */
	return (0);
}
