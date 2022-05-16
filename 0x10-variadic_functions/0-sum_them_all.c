#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: amount of the arguments
 *
 * Returns the sum of its parameters
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list sum;
	unsigned int i;
	int sum_them_all = 0;

	if (n == 0)
	return 0;

	va_start(sum, n);
	
	for (int i = 0; i < n; i++)
		
	sum_them_all += va_arg(sum, int);
	
	va_end(sum)
	return sum_them_all;
}
