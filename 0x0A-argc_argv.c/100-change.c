#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of coins to make change for an amount.
 * of money.
 * @argc: arguement counter.
 * @argv: arguement vector.
 * Return: 0 - success.
*/

int main(int argc, char *argv[])
{
	int cents, i;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[i]) < 0)
		{
			printf("0\n");
		}
	}
}
