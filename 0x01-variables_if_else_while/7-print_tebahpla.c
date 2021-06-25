#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints backwards alphabet using putchar commands
*
* Return: returns successfully a 0 upon completion
*/
int main(void)
{
int counter;
for (counter = 25; counter >= 0 ; counter--)
{
putchar (97 + counter);
}
putchar ('\n');
return (0);
}
