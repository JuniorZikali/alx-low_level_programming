#include <stdio.h>
/**
 * main - prints all possible combinations of three
 * digits followed by , and space then a newline
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n, m, z;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (z = 50; z < 58; z++)
			{
				if (z > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(z);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
