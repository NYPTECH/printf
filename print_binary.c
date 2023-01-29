

mubareksd
/
printf
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
 main 
printf/print_binary.c

mubareksd redo
 1 contributor
19 lines (15 sloc)  303 Bytes
#include "main.h"

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	size = print(p_buff);

	return (size);
}
