#include "main.h"
/**
 * _isdigit - checks if the number is between 0 to 9
 * @c: Imput number
 * Return: 1 if it's a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
