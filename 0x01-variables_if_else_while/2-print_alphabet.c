#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a newline
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
