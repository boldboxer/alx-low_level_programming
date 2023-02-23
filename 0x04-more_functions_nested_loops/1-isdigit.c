#include "main.h"
/**
 * _isdigit - checks wether a number passed as an argument is digit number
 * @digit argument to be checked
 * Return: returns 1 if successful or 0 if otherwise
 */
int _isdigit(int digit)
{
	if (digit >= '0' && digit <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
