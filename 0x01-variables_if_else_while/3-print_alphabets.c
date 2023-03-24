#include <stdio.h>

/**
 * main - prints uppercase alphebtical letters
 *
 * Return: (0) Success
 */

int main(void)
{	
	char low;

	for (low = 'a'; low <= 'Z'; low++)
        putchar(low);

	for (low ='A'; low <= 'Z'; low++)
	putchar(low);
        putchar('\n');

        return (0);

}
