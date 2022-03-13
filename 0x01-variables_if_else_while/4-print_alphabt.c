#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 * excluding q and e, followed by a
 * new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
