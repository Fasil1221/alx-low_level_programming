#include "main.h"
/**
 * more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
int i;
int j;

int z = 14;

for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= z; j++)
{
if (j >= 10)
{
_putchar((j / 10) + 48);
_putchar((j % 10) + 48);
}
}
_putchar('\n');
}
}

