#include <stdio.h>
/**
 * main - Entrey point
 * Description: Alphabet
 * Return = Always 0
 */
int main(void)
{
	int myNum = 0;
	while (myNum <= 9)
	{
	putchar(myNum + '0');
	myNum++;
	}
	putchar('\n');
	return (0);
}
