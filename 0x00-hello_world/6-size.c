#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char name = 'c';
	int age = 23;
	long int score = 100;
	long long int balance = 500;
	float Pi = 3.14;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(name));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(age));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(score));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(balance));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(Pi));

	return (0);
}
