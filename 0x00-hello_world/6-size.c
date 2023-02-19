#include <stdio.h>

/**
 * main - Start Point
 *
 * Return: always 0 (success)
 */

int main (void)

{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

      printf("size of char: %lu byte(s)\n", sizeof(d));
      printf("Size of int: %lu byte(s)\n", sizeof(a));
      printf("size of long int: %lu byte(s)\n", sizeof(b));
      printf("size of long long int: %lu byte(s)\n", sizeof(c));
      printf("size of float: %lu byte(s)\n", sizeof(f));
      
      return 0;
}
