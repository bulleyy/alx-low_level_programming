#include <stdio.h>
#include <stdlib.h>
/**
 * main ->  prints all single digit numbers of base 10 starting from 0
 * Return: 0 always
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf(num);
	}
	printf("\n");
	return (0);
}
