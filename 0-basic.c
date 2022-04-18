#include "stdio.h";
#include "main.h";
int printf(va_list s)
{
	char *format;
	int i;

	format = va_arg(s, char *);
	if (format == '\0')
	{
		format = "(null)";
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
	}
	return (i);
}