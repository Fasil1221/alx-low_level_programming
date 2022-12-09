#include <stdio.h>
/**
 * main - prints base 10 single digit number
 * Return: always 0
 */
	int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
