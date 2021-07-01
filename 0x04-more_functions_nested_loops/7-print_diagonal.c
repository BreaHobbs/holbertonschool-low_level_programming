#include "holberton.h"
/**
* print_diagonal - function checks for lowercase character
* @n: takes in input into function
* Return: returns successfully a 0 upon completion
*/
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}

		_putchar('\n');
}
