#include <stdio.h>
/**
 * print_name - function that prints a name
 *
 * @name: pointer to name to print
 * @f: function to print name
 *
 * Return: always void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
