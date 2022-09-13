#include "main.h"

/**
 * main - main block
 * 
 * Description:  compute the absolute value of an integer
 * 
 * Return: absolute value of @n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}