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
	va_list sum;
	va_start(sum, n);
	
	int sum_them_all = 0;
	for (int i = 0; i < n; i++)
		if (n == 0)
			return 0;
	{
		sum_them_all += va_arg(sum, int);
	}
	va_end(sum)
		return sum_them_all;
}
