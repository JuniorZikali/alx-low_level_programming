#include <stdio.h>
/**
 * main - prints all single digits in base
 * ten from zero to ten
 * Return: 0 Always (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
