#include <stdio.h>
/**
 * main - prints all numbers of base 10,
 * followed by a newline
 * Return: 0 Always (Success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
