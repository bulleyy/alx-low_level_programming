#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main -> assign a random number to the variable n each time it is executed
 * Return: 0 always
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
