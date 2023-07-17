#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always 0.
 */
int main(void)
{
int y;
char low;
for (y = 0; y < 10; y++)
putchar((y % 10) + '0');
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}
