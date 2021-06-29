#include "holberton.h"
/**
* jack_bauer - function checks for lowercase character
* Return: returns successfully a 0 upon completion
*/
int jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int minutes = 0;

		while (minutes < 60)
		{
			if (hours < 10)
			{
				_putchar ('0');
			}
			_putchar (hours);
			_putchar (':');
			if (minutes < 10)
			{
				_putchar('0');
			}
			_putchar(minutes);
			minutes++;
			_putchar('\n');
		}
		hours++;
	}
	return (0);
}
