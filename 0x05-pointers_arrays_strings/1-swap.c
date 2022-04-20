#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 42;
	int b = 98;
	putchar("a = %d, b = %d\n", a, b);
	 swap_int(&a, &b);
	putchar("a = %d, b = %d\n", a, b);
	return (0);
}
