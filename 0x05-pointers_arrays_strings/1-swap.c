/**
 * swap_int - swap to integer values
 *
 * @a: first value to swap
 * @b: second value to swap
 * Return: always void (0)
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
