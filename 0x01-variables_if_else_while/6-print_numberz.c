#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar 
 * Return: Always 0.
 */
int main(void)
{
int y;
for (y = 0; y < 10; y++)
putchar((y % 10) + '0');
putchar('\n');
return (0);
}
