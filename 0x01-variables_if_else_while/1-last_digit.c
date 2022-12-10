#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to n
 * each time its executes and print
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 5)
		printf("Last digit of %d is %d", n, n % 10, "and is greater than 5\n");
	else if (n == 0)
		printf("Last digit of %d is %d", n, n % 10, " and is 0\n");
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d", n, n% 10,"and is less than 6 and not 0\n");
	return (0);
}
