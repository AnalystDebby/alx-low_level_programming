#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: arugement counter.
 * @argv: arguement vector.
 * Return: 0 - success.
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else if (argc < 1)
		{
			printf("0\n");
		}

		sum += atoi(argv[i])
	}
	printf("%d\n", sum);

	return (0);
}
