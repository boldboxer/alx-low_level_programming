#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: input parameter
 * Return: 1 if is letter, 0 if is not letter
 */

int _isalpha(int c)
{
	if (c >= 'a' || 'A' && c <= 'z' || 'Z')
		return (1);
	else
		return (0);
}
