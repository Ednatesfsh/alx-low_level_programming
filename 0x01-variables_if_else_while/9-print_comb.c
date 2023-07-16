#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Prints all possible combinations of single-digit numbers
 * Return: Always (Success)
 */
int main(void)
{
int y;
for (y = 0; y <= 9; y++)
{
putchar((y % 10) + '0');
if
(y == 9);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
