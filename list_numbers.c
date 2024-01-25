#include <stdio.h>

/**
 * list_numbers - list numbers
 *
 * Return: Always 0.
 */
int list_numbers(void);

int list_numbers(void)
{
	int i, j;

	for (i =0; i <=12; i++)
	{
		for (j = 0; j <= 24; j++)
		{
			if (j >= 12)
			{
				printf("%d", 1);
			}
			else
			{
			printf("%d", j % 10);
			}
		}
	printf("/n");
	}
	return (0);
}
/**
 *
 *
 */
int main(void)
{
	int list_numbers(void);
	return (0);
}
