#include <stdio.h>
/**
 * main - print all possible combinations of
 * single-digit numbers seperated by , and
 * followed by space
 * Return: 0 Always (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
