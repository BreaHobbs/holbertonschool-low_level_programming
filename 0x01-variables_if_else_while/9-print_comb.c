#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the alphabet using putchar commands
* print_c_string: prints the message
* Return: returns successfully a 0 upon completion
*/

int main(void)
{
int counter;
for (counter = 0; counter <= 9; counter++)
{
putchar ('0' + counter);
if (counter < 9)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
