#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times
*
* Return: returns successfully a 0 upon completion
*/
void print_alphabet_x10(void)
{
	char c;
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar (c);
	}
		_putchar ('\n');
	}
}
