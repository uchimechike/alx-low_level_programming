#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;
	char *var = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	if (ld != 0 && lastDigit < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", var, n, ld);
	} else if (ld == 0)
	{
		printf("%s %d is %d and is 0\n", var, n, ld);
	} else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}

	return (0);
}

