#include <math.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


void write_int(int n)
{
	int tmp = n, i = 0, j = 0; 
	while (n % 10 > 9)
	{
		i++;
		tmp = tmp % 10;
	}
	
	for (j = tmp; j > 0; j--)
		_putchar(48 + (n % (int)pow(10, tmp)));
	_putchar(48 + tmp);
}

/**
 * _printf - Produces output according to a format
 * @format: The format of the string.
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{	
	/*va_list ap;*/
	unsigned int i = 0, n = 0;

	while (format[i] != 0)
	{	
		if (format[i] == '%')
			n++;
		i++;
	}
	/*va_start(ap, n);
	while (format[j] != '\0')
	{
		if (format[j] == '%')
			if (format[j + 1] == 'd' || format[j + 1] == 'i');
				
	}*/
	write(1, format, n);
	printf("We have %d formatters\n", n);
	return (n);
}

int main()
{
	write_int(5678);

	return (0);
}