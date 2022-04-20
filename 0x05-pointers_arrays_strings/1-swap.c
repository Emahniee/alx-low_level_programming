#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int swap_int(int *c, int *d)
{
	int a = 98;
	int b = 42;
	int *c = &a;
	int *d = &b;
	printf("a = %d, b = %d\n", a, b);
	 swap_int(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}
