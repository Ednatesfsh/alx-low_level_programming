#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be checked
 *
 * Return: integer length of the string
 */
int _strlen(char *s)
{
	int b = 0;

	if (!s)
		return (0);
	while (*s++)
		b++;
	return (b);
}

/**
 * print_list - prints all linked lists
 * @h: pointer to the first node
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		b++;
	}

	return (b);
}
