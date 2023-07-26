#include "main.h"
/**
  * _isdigit - check if a character is a digit
  * @x: The number to be checked
  * Return: 1 for a character to be a digit or 0 if not
  */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
