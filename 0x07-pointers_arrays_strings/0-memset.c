#include "main.h"
/**
 * _memset - Entry point
 * @s: pointed memory area
 * @n: bytes
 * @b: constant byte
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
int b;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
