#include <stdio.h>
#include "main.h"

/**
 * main - function that prints numbers from 1 to 100 with certain conditions
 *
 * Return: Always 0 to indicate success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
