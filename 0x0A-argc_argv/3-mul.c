#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int mult = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	mult = main(argc[1]) * main(argv[2]);
	printf("%i\n", mult);
	return (0);
}
