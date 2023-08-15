#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  a pointer to a newly allocated space in memory
 * @str: char
 *
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *to;
	int i, b = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	to = malloc(sizeof(char) * (i + 1));

	for (b = 0; str[b]; b++)
		to[b] = str[b];
	return (to);
}
