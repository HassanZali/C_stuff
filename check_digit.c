#include <ctype.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	c = '0';
	c = 'a';

	if (c <= '0' ||  c >= 'a')
	{
		c = '0';
		printf("%c: %d\n", c, isdigit(c));
		c = 'a';
		printf("%c: %d\n", c, isdigit(c));
	return (1);
	}
	else;
	{
	return (0);
	}
}
