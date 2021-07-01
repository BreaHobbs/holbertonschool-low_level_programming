#include "holberton.h"
/**
* print_line - function draws a straight line in the terminal
* @n: takes in input into function
* Return: returns successfully a 0 upon completion
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		--n;
		if (n <= 0)
		{
		_putchar('\n');
		}
	}
		_putchar('\n');
}
