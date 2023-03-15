#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
	/* declare variables */
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count])) /* check if str contains only digits */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	/* declare variables */
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* ATOI: convert string to int */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
