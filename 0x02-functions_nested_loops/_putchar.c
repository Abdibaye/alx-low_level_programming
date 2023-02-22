#include "main.c"
#include <unistd.h>
/**
 * _putchar-writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approtriatly.
 */
int_putchar(char c)
{
       return(write(1, &c, 1));
}	
