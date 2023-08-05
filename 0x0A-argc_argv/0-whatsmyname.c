#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *Return: always 0
 */
int main(int argc, char **argv[])
{
	printf("%s\n", *argv);

	return (0);
}
