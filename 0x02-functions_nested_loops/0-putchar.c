#include <stdio.h>

/**
* main - main block
*
* Description: program prints _putchar, followed by a new line.
*
* Return: 0
*/

int main(void)
{
	char print[] = "_putchar";
	int i = 0;

	while (print[i] != '\0')
	{
		putchar(print[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
