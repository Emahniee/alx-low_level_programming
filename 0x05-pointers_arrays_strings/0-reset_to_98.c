#include <stdio.h>

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
void reset_to_98 (int *n)
{

printf("n = %d\n", n);
reset_to_98(&n);
printf("n = %d\n", n);
return (0);
}
