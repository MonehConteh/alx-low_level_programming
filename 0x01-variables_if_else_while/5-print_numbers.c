#include <stdio.h>
/**
 * main - Entry
 * Return: always 0
 */
int main(void)
{
char myNum = '0';
while (myNum <= '9')
{
putchar(myNum);
myNum++;
}
putchar('\n');
return (0);
}
