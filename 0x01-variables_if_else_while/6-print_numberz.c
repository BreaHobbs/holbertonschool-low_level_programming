#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the alphabet using putchar commands
*
* Return: returns successfully a 0 upon completion
*/
int main(void)
{
int counter;
for (counter = 0 ; counter <= 9 ; counter++)
{
putchar (48 + counter);
}
putchar ('\n');
return (0);
}
