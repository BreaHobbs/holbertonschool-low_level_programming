#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * print_numbers - returns the largest of 3 numbers
 * Return: largest numberi
 * @c - takes in an char
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
