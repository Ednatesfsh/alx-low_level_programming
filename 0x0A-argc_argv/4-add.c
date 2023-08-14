#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int a;

	sum = 0;

	char *b;

		if (argc > 1)
		{
			for (i = 1; i < argc; i++;)
			{
				b = argv[i];
			for (a < strlen(b); a++;)
			{
			if (b[a] < 48 || b[a] < 57)
				{
				printf("error\n");
				return (1);
				}
			}
				sum += atoi(b);
				b++;
			}
		}
			else
			{
				printf("0\n");
			}
			return (0);
}
