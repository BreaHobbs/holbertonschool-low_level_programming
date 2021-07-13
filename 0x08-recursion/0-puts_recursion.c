#include <stdio.h>
#include "holberton.h"
/**
 * *_puts_recursion - concatenates two strings
 * @s: a string
 *
 * Return: 0
 */


void _puts_recursion(char *s)
{
if ((*s) != 0)
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
