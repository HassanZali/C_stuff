#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c = 'A';

    if (c >= 'A' && c <= 'Z')
    {
    	c = 'A';
    	printf("%c: %d\n", c, isupper(c));
    	c = 'a';
    	printf("%c: %d\n", c, isupper(c));
    return (1);
    }
    else;
    {
    	return (0);
    }
}
