#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 * excluding q and e, followed by a
 * new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch != 'e'; ch != 'q'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
