#include "main.h"
/**
  * _puts - prints a string
  * @str: The string to print
  *Return: void
  */
void _puts(char *str)
{
for (; *str != '\n'; str++)
{
	putchar(*str);
}
	putchar('\n');
}
