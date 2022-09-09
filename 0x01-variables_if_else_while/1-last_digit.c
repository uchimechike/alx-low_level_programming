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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	if (lastDigit == 0)
	{
		printf("Last digit of %d is 0\n", n);
	} else if (lastDigit > 0 && lastDigit < 6)
	{
		printf("Last digit of %d is less than 6 and not zero\n", n);
	} else
	{
		printf("Last digit of %d is greater than 5\n", n);
	}

	return (0);
}

