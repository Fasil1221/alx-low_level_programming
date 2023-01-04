# include "main.h"
/**
 * _puts_recursion - is a function that prints string
 * @s: is a string pointer
 */
void _puts_recursion(char *s)
{
int i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
