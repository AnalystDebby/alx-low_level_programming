#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: arguement counter.
 * @argv: arguement vector.
 * Return: 0 - success.
*/
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}

	return (0);

}
