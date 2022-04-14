#include "main.h"
/**
 * print_numbrs - prints the number zero to nine
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	i = 0;

	for (i = 0; i >= 9; i++)

	_putchar(i + '0');

	_putchar ('\n');
}
