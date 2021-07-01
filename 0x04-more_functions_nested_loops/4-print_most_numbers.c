#include "holberton.h"
/**
* print_most_numbers - function checks for lowercase character
* Return: returns successfully a 0 upon completion
*/
void print_most_numbers(void)
{
	char x = '0';

	for (x = '0'; x <= '9'; x++)
	{
	if (x <= '9' && x != '2' && x != '4')
		_putchar(x);

	}
	_putchar('\n');
}
