#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: conct s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, ca;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = ca = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ca] != '\0')
		ca++;
	conct = malloc(sizeof(char) * (a + ca + 1));

	if (conct == NULL)
		return (NULL);
	a = ca = 0;
	while (s1[a] != '\0')
		a++;

	while (s2[ca] != '\0')
	{
		conct[a] = s2[ca];
		a++, ca++;
	}
	conct[a] = '\0';
	return (conct);
}
