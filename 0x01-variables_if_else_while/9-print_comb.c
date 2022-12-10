#include <stdio.h>
/**
 * main - combputchar(n);ination of single digits
 * Return: always 0
 */
int main(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
		putchar(r + '0');
		if (r < 9)
		{
			putchar(',');
			putchar(' ');								}									}
	putchar('\n');
	return (0);
}
