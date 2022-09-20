#include <stdio.h>

/**
 * print_array - function that prints the elements of an array
 *
 * @a: pointer variable to the array
 *
 * @n: number of elements to be printed from array
 *
 * Return: Return type is void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
