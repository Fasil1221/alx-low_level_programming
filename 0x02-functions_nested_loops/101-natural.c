#include <stdio.h>
/**
*main - is mine
*Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			n += n;
		}
	}
	printf("%d", n);
	printf("\n");
	return (0);
}
