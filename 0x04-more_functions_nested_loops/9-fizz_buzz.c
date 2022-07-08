#include <stdio.h>
/**
 * main - checks for a digit (0 to 9)
 * Return: always 0
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 || k % 5 == 0)
		{
	if (k % 3 == 0)
			{
			printf("Fizz");
			}
			if (k % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", k);
			}
			if (k != 100)
			{
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
	}
}

