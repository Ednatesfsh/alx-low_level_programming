#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: no return
 */
void jack_bauer(void)
{
int h, m, n, o;
for (h = 0; h <= 2; h++)
{
for (m = 0; m <= 9; m++)
{
if ((h <= 1 && m <= 9) ||(h <= 2 && m <= 3))
{
for (n = 0; n <= 5; n++)
{
for (o = 0; o <= 9; o++)
{
	_putchar(h + '0');
	_putchar(m + '0');
	_putchar(59);
	_putchar(n + '0');
	_putchar(o + '0');
	_putchar('\n');
}
}
}
}
}
}
