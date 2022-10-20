#include <stdio.h>
#include <stdlib.h>
/**
 * main ->  prints the lowercase alphabet in reverse
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
