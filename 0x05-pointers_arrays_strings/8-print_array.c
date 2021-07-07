#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_array - function prints half of a string
* @a: takes input into function
* @n: also takes input into function
* Return: returns successfully a 0 upon completion
*/
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n ; counter++)
	{
		printf("%d", a[counter]);
		if (counter < n - 1)
			printf(", ");
	}
			printf("\n");

}
