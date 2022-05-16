#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - Write a function that returns the sum of all its parameters.
 *
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list args;
	va_start(args, n);
	
	unsigned int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
		if (n == 0)
			return 0;
	}
	va_end(args)
		return sum;
}
