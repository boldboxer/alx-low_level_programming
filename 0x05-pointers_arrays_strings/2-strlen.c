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
