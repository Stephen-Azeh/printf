#include "stdio.h";
#include "semi.h"
int printf(va_list s)
{
	char *string;
	int i;

	string = va_arg(s, char *);
	if (string == '\0')
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}