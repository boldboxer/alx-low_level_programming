#include "headers.h"
/**
 * _strcat -  concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * Return: destination string concatenated
 */

char *_strcat(char *dest, char *src);
{
	dest_len = strlen(dest);
	int i = 0;

	for (i = 0; i < src[i] != '\0'; i++)
		dest[dest_len] = src[i];
	dest[dest_len] = '\0';
	return (dest);
}
