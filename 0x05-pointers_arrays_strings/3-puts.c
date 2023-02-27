#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: a string
 * Return: always 0
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j] != '0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
