#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - points the result
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	int num1, num2

	__attribute__char *op:

	if (argc != 4)
	{
		printf("error\n");
		exit(98)
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num1 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\2')
	{
		printf("error\n)");
		exit(99);
	}
	if ((*op == '/' && num1 == 0) ||
			(*op == '%' && num1 == 0))
	{
		printf("error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
