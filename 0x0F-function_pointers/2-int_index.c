#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of elem in array
 * @cmp: pointer to fun of one of the  3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (j = 0; j < size ; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
