#include <stdio.h>
/**
 * main -> prints all the numbers of base 16 in lowercase
 * Return: 0 always
 */
int main(void)
{
	char ch;

	int n;

	for (n = 0; n <= 10; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
