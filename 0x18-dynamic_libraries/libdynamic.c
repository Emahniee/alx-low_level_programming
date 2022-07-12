#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _islower - checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
if (n >= 0)
return (n);
else
return (-n);
}

/**
 * _isupper - checks upper case
 * @c: prints int
 * Return: give 1 or 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}

else
{
return (0);
}
}

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

/**
 * _strlen - checks the length of a string
 * @s:input
 * Return: Always 0.
 */
int _strlen(char *s)
{
int length = 0;

while (*s != 0)
{
length++;
s++;
}

return (length);
}

/**
 * _puts - print a string followed by a new line
 * @str: string to print
 * Return: Nothing
 */
void _puts(char *str)
{
int i;

for (i = 0; *(str + i) != 0; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

/**
 * _strcpy - copies the string pointed
 * @dest: copie of the string
 * @src: origin of the string
 * Return: dest destine copie
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *
 * Return: The integer value of the comverted string.
 */

int _atoi(char *s)
{

int sign = 1;
unsigned int num = 0;

do {

if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');

else if (num > 0)
break;

} while (*s++);

return (num *sign);
}

/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;

a = 0;

while (dest[a] != 0)
{
a++;
}

b = 0;

while (src[b] != 0)
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}

/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

a = 0;

while (dest[a] != 0)
{
a++;
}

b = 0;

while (src[b] != 0 && b < n)

{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}

/**
 * _strncpy - copie the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 * @n: times to interate
 *
 * Return: the parameter dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

i = i;
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

/**
 * _strcmp - compares two strings
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: 0 if equal or b if is different
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;
int b = 0;

while (s1[a] != '\0' && b == 0)
{
b = s1[a] - s2[a];
a++;
}
return (b);
}

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}

return ('\0');
}

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}

if (*p == '\0')
return (haystack);
}

return (0);
}
