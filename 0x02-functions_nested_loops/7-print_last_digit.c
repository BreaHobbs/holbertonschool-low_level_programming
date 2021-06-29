#include "holberton.h"
/**
* print_last_digit - function checks for lowercase character
* @x: takes in input into function
* Return: returns successfully a 0 upon completion
*/
int print_last_digit(int x)
{
	int number = x % 10;

	if (number < 0)
	{
		number = (number * -1);
	}
	_putchar(number + '0');
return (number);
}
