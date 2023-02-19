#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start Point
 *
 * Return: always 0 (success)
 */

int main (void)

{
  int a
  long int b;
  long long int c;
  char d;
  float f;


  printf("size of char: %c byte(s)", (unsigned long)sizeof(d));
  printf("Size of int:%lu byte(s)", sizeof(a));
  printf("size of long int:%lu byte(s)", sizeof(b));
  printf("size of long long ont:%lu byte(s)", sizeof(c));
  printf("size of float:%f byte(s)", (unsigned long)sizeof(f));

return 0;
}
