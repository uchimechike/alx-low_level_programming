/**
 * swap_int - function that swaps the value of the parameters passed to it
 *
 * @a: parameter passed to the swap_int function
 *
 * @b: parameter passed to the swap_int function
 *
 * Return: there is no return value since the return type is void
 */

void swap_int(int *a, int *b)
{
	int hold_value;

	hold_value = *a;
	*a = *b;
	*b = hold_value;
}
