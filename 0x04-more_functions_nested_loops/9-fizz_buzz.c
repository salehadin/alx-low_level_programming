#include <stdio.h>
/**
 * main - print fizzbuzz
 * Return: 0
 */
int main(void)
{
	int n;

	printf("1");
	for (n = 2; n <= 100; n++)
	{
		printf(" ");
		if (n % 3 == 0)
			printf("fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
	}
	printf("\n");
	return (0);
}
