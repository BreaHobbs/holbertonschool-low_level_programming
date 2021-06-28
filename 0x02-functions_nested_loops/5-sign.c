#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* print_sign - function checks for lowercase character
* @n: takes in input into function
* Return: returns successfully a 0 upon completion
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar("-");
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
