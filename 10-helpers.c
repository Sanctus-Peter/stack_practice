#include "monty.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if is lower 0 otherwise;
 */

int _isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}

/**
 * is_number - check if a string is number
 * @str: string pointer
 * Return: 0 if false 1 if true
 */

int is_number(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (!_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
