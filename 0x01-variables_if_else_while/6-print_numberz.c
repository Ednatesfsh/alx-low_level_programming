#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - prints only using putchar
  *Return: Always (Success)
 */
int main(void)
{
int y;
for (y = 0; y < 10;y++)
putchar((y % 10) + '0');
putchar('\n');
return (0);
}
