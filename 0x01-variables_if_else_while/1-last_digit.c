#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * return: Always 0 (success)
 */
int main(void)
{
	char str[17];
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (str[n-1] > 5)
		printf("Last digit of %d is %d and is greater than 5", n, str[n-1]);
	else if (str[n-1] == 0)
		printf("Last diigit of %d is %d and is 0", n, str[n-1]);
	else 
		printf("Last digit of %d is %d and is less than 6 and not 0", n, str[n-1]);
	return (0);
}
