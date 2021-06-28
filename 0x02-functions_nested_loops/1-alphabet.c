#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* print_alphabet - Prints the alphabet from a..z
*
* Return: returns successfully a 0 upon completion
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar (c);

	}
_putchar ('\n');
}
