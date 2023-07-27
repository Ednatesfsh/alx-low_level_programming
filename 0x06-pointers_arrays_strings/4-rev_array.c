#include "main.h"
/**
  * reverse_array - reverses the contents of an array of integers
  * @a: array
  * @n: number of elements of array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int d;
	int b;
for (d = 0; d < n--; d++)
{
	b = a[d];
	a[d] = a[n];
	a[n] = b;
}
}
