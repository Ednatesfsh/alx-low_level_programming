#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Prints the last digit of a randomly generated number.
 *Return: Always 0.
 */
int main(void)
{
int n, lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 98) > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n % 98);
}
else if ((n % -98) < 6 && (n % -98) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",	n, n % -98);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, n % 98);
}
return (0);
}
