#include <stdio.h>

/**
 * main - prints lowercase alphebtical letters
 *
 * Return: (0) Success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z', c++;)
	putchar(c);
	putchar('\n');
	return (0);

}
