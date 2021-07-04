#include "holberton.h"
/**
* swap_int - Write a function that swaps the values of two integers.
* @a: takes in input into function
* @b: also takes in input into function
* Return: returns successfully a 0 upon completion
*/
void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;

	*b = c;
}
