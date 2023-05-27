#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: array of type char
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", _strlen("My Dyn Lib"));
	return (0);
}
