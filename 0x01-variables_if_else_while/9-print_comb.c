#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the alphabet using putchar commands
* print_c_string: prints the message
* Return: returns successfully a 0 upon completion
*/

void print_c_string(char *message)
{
int i;
int count = 0;
while (message[count] != '\0')
{
count++;
}

for (i = 0; i < count; ++i)
putchar (message[i]);

}
int main(void)
{

char *message = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
print_c_string(message);
putchar ('\n');
return (0);
}
