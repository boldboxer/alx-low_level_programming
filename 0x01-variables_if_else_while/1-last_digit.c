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
		printf("Last digit of %d is %d", n, str[n-1]"and is greater than 5");
	else if (str[n-1] == 0)
		printf("Last diigit of %d is %d and is 0");
	else (str[n-1] < 6 && !=0)
		printf("Last digit of %d is %d", n, str[n-1]"and is less than 6 and not 0");
	return (0);
}
