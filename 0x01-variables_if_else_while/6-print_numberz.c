#include <stdio.h>
/**
 * main - prints all single numbers in
 * base ten from zero, followed by a new
 * line
 * Return: 0 Always (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
