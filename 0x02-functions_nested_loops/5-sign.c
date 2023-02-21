#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: parameter
 * Return: 1 & prints + if is greater than zero
 *         0 and prints 0 if n is zero
 *         -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
		printf("+");
	return (1);
	else if (n == 0)
		printf("0");
	return (0);
	else if (n < 0)
		printf("-");
	return (-1);
}
