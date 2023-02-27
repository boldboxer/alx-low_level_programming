#include "main.h"

/*
 * swap_int -  swaps the values of two integers
 * @a: first value to swap
 * @b: second value to swap
 * Return: always 0 (success)
 */

void swap_int(int *a, int *b)
{
	printf("a=%d, b=%d\n", a, b);
        swap_int(&a, &b);
        printf("a=%d, b=%d\n", a, b);
        return (0);
}
