#include "main.h"
/**
 * more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
int i;
int j;

/*int z = 14;*/

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar('1');
_putchar((j % 10) + '0');
}
else
_putchar(j + 48);
}
_putchar('\n');
}
}

