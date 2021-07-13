#include "holberton.h"
/**
* _print_rev_recursion - function prints a reversed string
 * @s: takes in a variable
 * Return: returns successfully a 0 upon completion
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
