#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *@s: pointed memory area
 *@n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
return s;
}
