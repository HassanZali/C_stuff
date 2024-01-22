#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)

	{
	if (!(c == '2' || c == '4'))

	putchar(c);
	}
	putchar('\n');
	printf("%c",'a');
    return (0);
}
